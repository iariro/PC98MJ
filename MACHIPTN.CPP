#include <stdio.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"
#include "machiptn.h"

/**
 * @brief メンバーの初期化を行う。
 *
 * @author kumagai
 *
 * @param verbose true=処理の詳細を表示する／false=しない
 * @param breakOnFindOne true=テンパイするパターンを１個見つけた時点で終了する
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
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
 * @brief ３面子見つかった際に実行される。残りの牌から待ちを判定する。
 *
 * @author kumagai
 *
 * @param tehai 手牌の配列
 * @param totalNum 手牌の数
 * @param use2 面子確定インデックス
 *
 * @return true=まだ検索を続ける
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
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

			// 何もしない。
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

	// 見つからなかったら常に続行。
	// 途中切り上げでなかったら常に続行。
	// 見つかり、かつ途中切り上げの場合のみ切り上げ。

	return !find || !breakOnFindOne;
}

/**
 * @brief 待ちを表示する。
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
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
				printf("，");
			}

			printf("%s", Pai::text[i]);
			count++;
		}
	}
	printf("待ち\n");
}

/**
 * @brief 待ちを取得する。
 *
 * @author kumagai
 *
 * @param machiArray 待ち牌を格納する配列
 * @param paiCount 既出の牌カウント情報
 *
 * @date 2010/11/17
 *	- kumagai:新規作成。
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
