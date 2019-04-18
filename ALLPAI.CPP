#include <stdio.h>
#include <stdlib.h>
#include "pai.h"
#include "allpai.h"

/**
 * @brief 指定の牌を集約、またランダム値を割り当てオブジェクトを構築。
 *
 * @author kumagai
 *
 * @param pai 牌
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
PaiAndRandomValue::PaiAndRandomValue(Pai::PaiKind pai)
	: pai(pai)
{
	randomValue = ::rand();
}

/**
 * @brief PaiAndRandomValueオブジェクトのランダム値による比較。
 *
 * @author kumagai
 *
 * @param pai1 値１
 * @param pai2 値２
 *
 * @return 1/0/-1による比較結果
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
int AllPai::ComparePaiAndRandomValue(const void * pai1, const void * pai2)
{
	PaiAndRandomValue ** pai11 = (PaiAndRandomValue **)pai1;
	PaiAndRandomValue ** pai22 = (PaiAndRandomValue **)pai2;

	if((*pai11)->randomValue > (*pai22)->randomValue)
	{
		// １の方が大きい。

		return 1;
	}
	else if((*pai11)->randomValue < (*pai22)->randomValue)
	{
		// ２の方が大きい。

		return -1;
	}
	else
	{
		// 同じ。

		return 0;
	}
}

/**
 * @brief ランダム化した全牌コレクションを生成。
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
AllPai::AllPai()
	: offset(0)
{
	PaiAndRandomValue ** paiAndRandomValues =
		new PaiAndRandomValue * [Pai::allNum];

	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		for(int j=0 ; j<4 ; j++)
		{
			paiAndRandomValues[i * 4 + j] =
				new PaiAndRandomValue((Pai::PaiKind)i);
		}
	}

	::qsort(
		paiAndRandomValues,
		Pai::allNum,
		sizeof(PaiAndRandomValue *),
		ComparePaiAndRandomValue);

	for(i=0 ; i<Pai::allNum ; i++)
	{
		allPai[i] = paiAndRandomValues[i]->pai;
		delete paiAndRandomValues[i];
	}

	delete [] paiAndRandomValues;
}

/**
 * @brief まだ牌があるかを取得。
 *
 * @author kumagai
 *
 * @return true=ある／false=ない
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
int AllPai::HasPai(void)
{
	return offset < Pai::allNum;
}

/**
 * @brief 牌を１個取得。
 *
 * @author kumagai
 *
 * @return 牌１個
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
Pai::PaiKind AllPai::GetPai(void)
{
	Pai::PaiKind pai = allPai[offset];

	offset++;

	return pai;
}
