#include <stdio.h>
#include <stdlib.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"
#include "machiptn.h"
#include "suteptn.h"

/**
 * @brief ”v”z—ñƒ\[ƒg—p”äŠrŠÖ”B
 *
 * @author kumagai
 *
 * @param pai1 ”v‚P
 * @param pai2 ”v‚Q
 *
 * @date 2010/11/17
 *	- kumagai:V‹Kì¬B
 */
int SutehaiPattern::SortPai(const void * pai1, const void * pai2)
{
	Pai::PaiKind * pai11 = (Pai::PaiKind *)pai1;
	Pai::PaiKind * pai22 = (Pai::PaiKind *)pai2;

	if(*pai11 > *pai22)
	{
		return 1;
	}
	else if(*pai11 < *pai22)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

/**
 * @brief —^‚¦‚ç‚ê‚½è”v‚©‚çƒŠ[ƒ`éŒ¾”v‚ğŒŸõ‚·‚éB
 *
 * @author kumagai
 *
 * @param tehai1 ƒcƒ‚”v‚ğŠÜ‚Şè”v‚Ì”z—ñ
 *
 * @date 2010/11/17
 *	- kumagai:V‹Kì¬B
 */
SutehaiPattern::SutehaiPattern(Pai::PaiKind tehai1 [])
	: verbose(verbose), loopCount(0)
{
	int check [34];
	int sutehai2 [34];

	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		check[i] = 0;
		sutehai2[i] = 0;
	}

	for(i=0 ; i<14 ; i++)
	{
		if(! check[tehai1[i]])
		{
			Pai::PaiKind tehai2 [13];

			for(int j=0 ; j<13 ; j++)
			{
				tehai2[j] = tehai1[j + (j >= i ? 1 : 0)];
			}

			// ƒ\[ƒgB
			::qsort(tehai2, 13, sizeof(Pai::PaiKind), SortPai);

			MachiPattern pattern(0, 1);

			pattern.MakeMentsu(tehai2, 13);

			loopCount += pattern.loopCount;

			PaiCount paiCount(tehai2, 13);

			Pai::PaiKind machi [13];
			int machiCount = pattern.GetMachi(machi, &paiCount);

			if(machiCount > 0)
			{
				sutehai2[tehai1[i]] = 1;
			}
		}

		check[tehai1[i]] = 1;
	}

	for(i=0 ; i<14 ; i++)
	{
		sutehai[i] = sutehai2[tehai1[i]];
	}
}
