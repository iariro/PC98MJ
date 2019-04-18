#include <stdio.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"
#include "machiptn.h"

/**
 * @brief �����o�[�̏��������s���B
 *
 * @author kumagai
 *
 * @param verbose true=�����̏ڍׂ�\������^false=���Ȃ�
 * @param breakOnFindOne true=�e���p�C����p�^�[�����P���������_�ŏI������
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
MachiPattern::MachiPattern(int verbose, int breakOnFindOne)
	: verbose(verbose), breakOnFindOne(breakOnFindOne)
{
	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		machi[i] = 0;
	}
}

/**
 * @brief �R�ʎq���������ۂɎ��s�����B�c��̔v����҂��𔻒肷��B
 *
 * @author kumagai
 *
 * @param tehai ��v�̔z��
 * @param totalNum ��v�̐�
 * @param use2 �ʎq�m��C���f�b�N�X
 *
 * @return true=�܂������𑱂���
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
int MachiPattern::OnFind3Mentsu(Pai::PaiKind tehai [], int totalNum,
	int * use2)
{
	Pai::PaiKind * nokori = new Pai::PaiKind [totalNum];
	int nokoriCount = 0;

	for(int i=0 ; i<totalNum ; i++)
	{
		if(use2[i] == 0)
		{
			nokori[nokoriCount] = tehai[i];
			nokoriCount++;
		}
	}

	if(nokoriCount == totalNum - 3 * 3)
	{
		if(verbose)
		{
			printf("use:");
			for(int i=0 ; i<totalNum ; i++)
			{
				if(i > 0)
				{
					if(i % 3 == 0)
					{
						printf(" / ");
					}
					else
					{
						printf(" ");
					}
				}

				int index = -1;

				for(int j=0 ; j<totalNum ; j++)
				{
					if(i + 1 == use2[j])
					{
						index = j;
					}
				}

				if(index >= 0)
				{
					printf("%s", Pai::text[tehai[index]]);
				}
				else
				{
					printf("-");
				}
			}

			printf("\nnkr:");

			for(i=0 ; i<nokoriCount ; i++)
			{
				if(i > 0)
				{
					printf(" ");
				}

				printf("%s", Pai::text[nokori[i]]);
			}

			puts("");
			puts("");
		}

		if(	nokori[0] == nokori[1] &&
			nokori[1] == nokori[2] &&
			nokori[2] == nokori[3])
		{
			// 1111

			// �������Ȃ��B
		}
		else if(nokori[0] + 1 == nokori[1] &&
				nokori[1] + 1 == nokori[2] &&
				nokori[2] + 1 == nokori[3])
		{
			// 1234

			if(	nokori[3] <= Pai::s9 &&
				nokori[0] / 9 == nokori[3] / 9)
			{
				machi[(int)nokori[0]] = 1;
				machi[(int)nokori[3]] = 1;
			}
		}
		else if(nokori[0] + 1 == nokori[1] &&
				nokori[2] == nokori[3])
		{
			// 12xx

			if(	nokori[1] <= Pai::s9 &&
				nokori[0] != Pai::m1 &&
				nokori[0] != Pai::p1 &&
				nokori[0] != Pai::s1)
			{
				machi[(int)nokori[0] - 1] = 1;
			}

			if(	nokori[1] <= Pai::s9 &&
				nokori[1] != Pai::m9 &&
				nokori[1] != Pai::p9 &&
				nokori[1] != Pai::s9)
			{
				machi[(int)nokori[1] + 1] = 1;
			}
		}
		else if(nokori[0] + 1 == nokori[1] &&
				nokori[1] + 1 == nokori[2])
		{
			// 123x

			if(	nokori[2] <= Pai::s9 &&
				nokori[0] / 9 == nokori[2] / 9)
			{
				machi[(int)nokori[3]] = 1;
			}
		}
		else if(nokori[0] == nokori[1] &&
				nokori[1] == nokori[2])
		{
			// 111x

			machi[(int)nokori[3]] = 1;

			if(	nokori[3] <= Pai::s9 &&
				nokori[2] / 9 == nokori[3] / 9 &&
				nokori[2] + 1 == nokori[3])
			{
				// 1112

				if(	nokori[2] != Pai::m1 &&
					nokori[2] != Pai::p1 &&
					nokori[2] != Pai::s1)
				{
					machi[(int)nokori[2] - 1] = 1;
				}

				if(	nokori[3] != Pai::m9 &&
					nokori[3] != Pai::p9 &&
					nokori[3] != Pai::s9)
				{
					machi[(int)nokori[3] + 1] = 1;
				}
			}
			else if(	nokori[3] <= Pai::s9 &&
				nokori[2] / 9 == nokori[3] / 9 &&
				nokori[2] + 2 == nokori[3])
			{
				// 1113

				machi[(int)nokori[2] + 1] = 1;
			}
		}
		else if(nokori[1] == nokori[2] && nokori[2] == nokori[3])
		{
			// x111

			machi[(int)nokori[0]] = 1;

			if(	nokori[3] <= Pai::s9 &&
				nokori[0] / 9 == nokori[1] / 9 &&
				nokori[0] + 1 == nokori[1])
			{
				// 2333

				if(	nokori[0] != Pai::m1 &&
					nokori[0] != Pai::p1 &&
					nokori[0] != Pai::s1)
				{
					machi[(int)nokori[0] - 1] = 1;
				}

				if(	nokori[1] != Pai::m9 &&
					nokori[1] != Pai::p9 &&
					nokori[1] != Pai::s9)
				{
					machi[(int)nokori[1] + 1] = 1;
				}
			}
			else if(nokori[3] <= Pai::s9 &&
					nokori[0] / 9 == nokori[1] / 9 &&
					nokori[0] + 2 == nokori[1])
			{
				// 1333

				machi[(int)nokori[0] + 1] = 1;
			}
		}
		else if(nokori[0] + 2 == nokori[1] && nokori[2] == nokori[3])
		{
			// 13xx

			if(	nokori[1] <= Pai::s9 &&
				nokori[0] / 9 == nokori[1] / 9)
			{
				machi[(int)nokori[0] + 1] = 1;
			}
		}
		else if(nokori[0] == nokori[1] && nokori[2] + 2 == nokori[3])
		{
			// xx13

			if(	nokori[3] <= Pai::s9 &&
				nokori[2] / 9 == nokori[3] / 9)
			{
				machi[(int)nokori[2] + 1] = 1;
			}
		}
		else if(nokori[0] == nokori[1] && nokori[2] + 1 == nokori[3])
		{
			// xx12

			if(	nokori[3] <= Pai::s9 &&
				nokori[2] != Pai::m1 &&
				nokori[2] != Pai::p1 &&
				nokori[2] != Pai::s1)
			{
				machi[(int)nokori[2] - 1] = 1;
			}

			if(	nokori[3] <= Pai::s9 &&
				nokori[3] != Pai::m9 &&
				nokori[3] != Pai::p9 &&
				nokori[3] != Pai::s9)
			{
				machi[(int)nokori[3] + 1] = 1;
			}
		}
		else if(nokori[0] == nokori[1] && nokori[2] == nokori[3])
		{
			// xxyy

			machi[(int)nokori[0]] = 1;
			machi[(int)nokori[2]] = 1;
		}
		else if(nokori[0] + 1 == nokori[1] &&
				nokori[1] == nokori[2] &&
				nokori[2] + 1 == nokori[3])
		{
			// 1223

			if(	nokori[3] <= Pai::s9 &&
				nokori[0] / 9 == nokori[3] / 9)
			{
				machi[(int)nokori[1]] = 1;
			}
		}
	}

	delete [] nokori;

	int find = 0;
	for(i=0 ; i<Pai::allKindNum && !find ; i++)
	{
		find = machi[i];
	}

	// ������Ȃ��������ɑ��s�B
	// �r���؂�グ�łȂ��������ɑ��s�B
	// ������A���r���؂�グ�̏ꍇ�̂ݐ؂�グ�B

	return !find || !breakOnFindOne;
}

/**
 * @brief �҂���\������B
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
void MachiPattern::PrintMachi()
{
	int count = 0;

	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		if(machi[i])
		{
			if(count > 0)
			{
				printf("�C");
			}

			printf("%s", Pai::text[i]);
			count++;
		}
	}
	printf("�҂�\n");
}

/**
 * @brief �҂����擾����B
 *
 * @author kumagai
 *
 * @param machiArray �҂��v���i�[����z��
 * @param paiCount ���o�̔v�J�E���g���
 *
 * @date 2010/11/17
 *	- kumagai:�V�K�쐬�B
 */
int MachiPattern::GetMachi(Pai::PaiKind machiArray [], PaiCount * paiCount)
{
	int count = 0;

	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		if(this->machi[i])
		{
			if(paiCount->array[i] < 4)
			{
				machiArray[count] = (Pai::PaiKind)i;
				count++;
			}
		}
	}

	return count;
}