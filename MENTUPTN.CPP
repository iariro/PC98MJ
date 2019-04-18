#include <stdio.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"

/**
 * @brief 面子検索開始。
 *
 * @author kumagai
 *
 * @param tehai 手牌の配列
 * @param tehaiNum 手牌の数
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
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
 * @brief 再起的に面子を検索する。
 *
 * @author kumagai
 *
 * @param tehai 手牌の配列
 * @param tehaiNum 手牌の数
 * @param use1 使用済みかを判定する配列
 * @param use2 面子確定を表す配列
 * @param mentsu1 面子候補の牌１
 * @param mentsu2 面子候補の牌２
 * @param mentsuCount 面子候補の牌の数
 * @param mentsuCount2 確定した面子の数
 * @param level 再起呼び出しの深さ＝牌の検索順
 * @param start 検索開始インデックス
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
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
