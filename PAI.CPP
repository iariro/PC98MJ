#include "pai.h"

const int Pai::allKindNum = 9 * 3 + 4 + 3;
const int Pai::allNum = (9 * 3 + 4 + 3) * 4;

/**
 * @brief ”vƒeƒLƒXƒgB
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:V‹Kì¬B
 */
const char Pai::text [34][5] =
{
	"ˆêäİ", "“ñäİ", "Oäİ", "läİ", "ŒÜäİ", "˜Zäİ", "µäİ", "”ªäİ", "‹ãäİ",
	"ˆê“›", "“ñ“›", "O“›", "l“›", "ŒÜ“›", "˜Z“›", "µ“›", "”ª“›", "‹ã“›",
	"ˆêô", "“ñô", "Oô", "lô", "ŒÜô", "˜Zô", "µô", "”ªô", "‹ãô",
	" “Œ ", " “ì ", " ¼ ", " –k ",
	" ”’ ", " á¢ ", " ’† "
};

/**
 * @brief ƒ\[ƒg—p”v”äŠrB
 *
 * @author kumagai
 *
 * @param pai1 ”v‚P
 * @param pai2 ”v‚Q
 *
 * @return 1/0/-1‚É‚æ‚é”äŠrŒ‹‰Ê
 *
 * @date 2010/11/18
 *	- kumagai:V‹Kì¬B
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
