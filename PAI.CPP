#include "pai.h"

const int Pai::allKindNum = 9 * 3 + 4 + 3;
const int Pai::allNum = (9 * 3 + 4 + 3) * 4;

/**
 * @brief veLXgB
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:VKμ¬B
 */
const char Pai::text [34][5] =
{
	"κδέ", "ρδέ", "Oδέ", "lδέ", "άδέ", "Zδέ", "΅δέ", "ͺδέ", "γδέ",
	"κ", "ρ", "O", "l", "ά", "Z", "΅", "ͺ", "γ",
	"κτ", "ρτ", "Oτ", "lτ", "άτ", "Zτ", "΅τ", "ͺτ", "γτ",
	"  ", " μ ", " Ό ", " k ",
	"  ", " α’ ", "  "
};

/**
 * @brief \[gpvδrB
 *
 * @author kumagai
 *
 * @param pai1 vP
 * @param pai2 vQ
 *
 * @return 1/0/-1ΙζιδrΚ
 *
 * @date 2010/11/18
 *	- kumagai:VKμ¬B
 */
int Pai::ComparePai(const void * pai1, const void * pai2)
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
