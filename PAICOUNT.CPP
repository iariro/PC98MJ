#include "pai.h"
#include "paicount.h"

/**
 * @brief 指定の牌配列からカウント情報を構築する。
 *
 * @author kumagai
 *
 * @param array 牌配列
 * @param num 牌個数
 *
 * @date 2010/11/17
 *	- kumagai:新規作成。
 */
PaiCount::PaiCount(Pai::PaiKind array [], int num)
{
	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		this->array[i] = 0;
	}

	for(i=0 ; i<num ; i++)
	{
		this->array[array[i]]++;
	}
}
