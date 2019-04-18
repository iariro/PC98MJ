#include <stdio.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"

/**
 * @brief �ʎq�����J�n�B
 *
 * @author kumagai
 *
 * @param tehai ��v�̔z��
 * @param tehaiNum ��v�̐�
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
void MentsuPattern::MakeMentsu(Pai::PaiKind tehai [], int tehaiNum)
{
	int * use1 = new int [tehaiNum];
	int * use2 = new int [tehaiNum];

	for(int i=0 ; i<tehaiNum ; i++)
	{
		use1[i] = 0;
		use2[i] = 0;
	}

	loop = 1;
	loopCount = 0;
	MakeMentsuRecursive(tehai, tehaiNum, use1, use2, 0, 0, 0, 0, 1, 0);

	delete [] use1;
	delete [] use2;
}

/**
 * @brief �ċN�I�ɖʎq����������B
 *
 * @author kumagai
 *
 * @param tehai ��v�̔z��
 * @param tehaiNum ��v�̐�
 * @param use1 �g�p�ς݂��𔻒肷��z��
 * @param use2 �ʎq�m���\���z��
 * @param mentsu1 �ʎq���̔v�P
 * @param mentsu2 �ʎq���̔v�Q
 * @param mentsuCount �ʎq���̔v�̐�
 * @param mentsuCount2 �m�肵���ʎq�̐�
 * @param level �ċN�Ăяo���̐[�����v�̌�����
 * @param start �����J�n�C���f�b�N�X
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
void MentsuPattern::MakeMentsuRecursive
	(Pai::PaiKind tehai [], int tehaiNum, int * use1, int * use2, int mentsu1,
	 int mentsu2, int mentsuCount, int mentsuCount2, int level, int start)
{
	Pai::PaiKind prevPai;
	int prev = 0;

	loopCount++;

	if(level >= tehaiNum)
	{
		return;
	}

	if(level == tehaiNum - 3 * 1 + 1)
	{
		if(mentsuCount2 < 3)
		{
			return;
		}
	}

	if(level == tehaiNum - 3 * 2 + 1)
	{
		if(mentsuCount2 < 2)
		{
			return;
		}
	}

	if(level == tehaiNum - 3 * 3 + 1)
	{
		if(mentsuCount2 < 1)
		{
			return;
		}
	}

	for(int i=start ; i<tehaiNum && loop ; i++)
	{
		if(use1[i] <= 0 && (!prev || tehai[i] != prevPai))
		{
			if(mentsuCount == 0)
			{
				use1[i] = level;

				MakeMentsuRecursive(
					tehai,
					tehaiNum,
					use1,
					use2,
					i,
					0,
					1,
					mentsuCount2,
					level + 1,
					i + 1);

				use1[i] = 0;
			}
			else if(mentsuCount == 1)
			{
				use1[i] = level;

				if(	tehai[mentsu1] == tehai[i] ||
					(tehai[i] < Pai::s9 && tehai[mentsu1] + 1 == tehai[i]))
				{
					MakeMentsuRecursive(
						tehai,
						tehaiNum,
						use1,
						use2,
						mentsu1,
						i,
						2,
						mentsuCount2,
						level + 1,
						i + 1);
				}

				use1[i] = 0;
			}
			else if(mentsuCount == 2)
			{
				int kakutei = 0;

				if(	tehai[mentsu1] == tehai[mentsu2] &&
					tehai[mentsu2] == tehai[i])
				{
					kakutei = 1;
				}
				else if(tehai[mentsu1] >= Pai::m1 && tehai[i] <= Pai::s9)
				{
					if(	tehai[mentsu1] + 1 == tehai[mentsu2] &&
						tehai[mentsu2] + 1 == tehai[i])
					{
						if(tehai[mentsu1] / 9 == tehai[i] / 9)
						{
							kakutei = 1;
						}
					}
				}

				if(kakutei)
				{
					for(int j=i+1 ; j<tehaiNum && kakutei; j++)
					{
						if(use2[j] > 0)
						{
							kakutei = 0;
						}
					}
				}

				use1[i] = level;

				if(kakutei)
				{
					if(level <= 3 * 3)
					{
						use2[mentsu1] = level - 2;
						use2[mentsu2] = level - 1;
						use2[i] = level;

						if(mentsuCount2 < 2)
						{
							MakeMentsuRecursive(
								tehai,
								tehaiNum,
								use1,
								use2,
								0,
								0,
								0,
								mentsuCount2 + 1,
								level + 1,
								0);
						}
						else
						{
							loop = OnFind3Mentsu(tehai, tehaiNum, use2);
						}

						use2[mentsu1] = 0;
						use2[mentsu2] = 0;
						use2[i] = 0;
					}
				}

				use1[i] = 0;
			}

			prevPai = tehai[i];
			prev = 1;
		}
	}
}