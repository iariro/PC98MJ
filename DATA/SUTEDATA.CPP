#include "pai.h"
#include "data\sutedata.h"

Pai::PaiKind SutehaiData::tehai [][14] =
{
	{
		Pai::m2, Pai::m2, Pai::m2,
		Pai::m3, Pai::m3, Pai::m3,
		Pai::p4, Pai::p5, Pai::p8,
		Pai::to, Pai::to, Pai::to,
		Pai::hk, Pai::hk
	},
	{
		Pai::m2, Pai::m2, Pai::m2,
		Pai::m3, Pai::m3, Pai::m3,
		Pai::p4, Pai::p5, Pai::p6, Pai::p7,
		Pai::to, Pai::to, Pai::to,
		Pai::hk
	},
	{
		Pai::m2, Pai::m2, Pai::m2,
		Pai::m3, Pai::m3, Pai::m3,
		Pai::p4, Pai::p6, Pai::p7,
		Pai::to, Pai::to, Pai::to,
		Pai::hk, Pai::hk
	},
	{
		Pai::m4, Pai::m5, Pai::m6,
		Pai::m8, Pai::m9,
		Pai::p7, Pai::p8, Pai::p9,
		Pai::s1, Pai::s1, Pai::s3,
		Pai::sh, Pai::sh, Pai::sh
	},
	{
		Pai::m1, Pai::m1, Pai::m1,
		Pai::m5, Pai::m5,
		Pai::p3, Pai::p4, Pai::p5,
		Pai::s1, Pai::s2, Pai::s2,
		Pai::hk, Pai::hk, Pai::hk
	},
	{
		Pai::m1, Pai::m1, Pai::m1,
		Pai::m5, Pai::m5,
		Pai::p3, Pai::p3,
		Pai::s1, Pai::s2, Pai::s3,
		Pai::hk, Pai::hk, Pai::hk,
		Pai::m9
	},
	{
		Pai::m2, Pai::m2, Pai::m3,
		Pai::p6, Pai::p7, Pai::p8,
		Pai::s2, Pai::s2,
		Pai::s7, Pai::s8, Pai::s9,
		Pai::hk, Pai::hk,
		Pai::m2
	},
	{
		Pai::m1, Pai::m1,
		Pai::m5, Pai::m6, Pai::m6, Pai::m7, Pai::m8,
		Pai::m9, Pai::m9,
		Pai::p3,
		Pai::s7, Pai::s8, Pai::s9,
		Pai::m7
	},
	{
		Pai::m1, Pai::m2, Pai::m3,
		Pai::m6, Pai::m7, Pai::m8,
		Pai::p5, Pai::p6,
		Pai::p8, Pai::p8,
		Pai::s2, Pai::s4, Pai::s4,
		Pai::p7
	},
	{
		Pai::m2, Pai::m3, Pai::m4,
		Pai::p2, Pai::p3, Pai::p4,
		Pai::s3, Pai::s4, Pai::s5,
		Pai::s7, Pai::s8, Pai::s9,
		Pai::ch,
		Pai::s3
	},

	{
		Pai::m2, Pai::m3, Pai::m4,
		Pai::p7, Pai::p7, Pai::p9,
		Pai::s3, Pai::s4,
		Pai::s4, Pai::s5, Pai::s6,
		Pai::ht, Pai::ht,
		Pai::p7
	},
	{
		Pai::m2, Pai::m2,
		Pai::m8, Pai::m8, Pai::m9,
		Pai::p4, Pai::p5, Pai::p6,
		Pai::s6, Pai::s7, Pai::s8,
		Pai::s9, Pai::s9,
		Pai::m2
	},
	{
		Pai::m1, Pai::m2, Pai::m3,
		Pai::p2, Pai::p3, Pai::p4,
		Pai::p6, Pai::p7, Pai::p8,
		Pai::s4, Pai::s5,
		Pai::to, Pai::to,
		Pai::s5
	},
	{
		Pai::m4, Pai::m5, Pai::m6,
		Pai::p2, Pai::p2,
		Pai::p5, Pai::p5, Pai::p5,
		Pai::p9, Pai::p9,
		Pai::s1, Pai::s2, Pai::s3,
		Pai::s2
	},
	{
		Pai::m2, Pai::m2,
		Pai::m3, Pai::m3, Pai::m3,
		Pai::p4, Pai::p4, Pai::p4,
		Pai::p5, Pai::p6,
		Pai::s4, Pai::s5, Pai::s6,
		Pai::p2
	},
	{
		Pai::m3, Pai::m4, Pai::m5,
		Pai::p4, Pai::p5, Pai::p6,
		Pai::p7, Pai::p8,
		Pai::hk, Pai::hk, Pai::hk,
		Pai::ht, Pai::ht, Pai::ht
	},
	{
		Pai::p5, Pai::p6, Pai::p7,
		Pai::p9, Pai::p9,
		Pai::s1, Pai::s1, Pai::s1,
		Pai::s5, Pai::s6, Pai::s7,
		Pai::sh, Pai::sh,
		Pai::s1
	},
	{
		Pai::m1, Pai::m1,
		Pai::m2, Pai::m2,
		Pai::m3,
		Pai::s2, Pai::s3, Pai::s4,
		Pai::s4, Pai::s5, Pai::s6,
		Pai::to, Pai::to,
		Pai::s6
	},
	{
		Pai::m1, Pai::m2, Pai::m3,
		Pai::s5, Pai::s5, Pai::s5,
		Pai::s6, Pai::s6, Pai::s7, Pai::s7,
		Pai::ht, Pai::ht, Pai::ht,
		Pai::m1
	},
	{
		Pai::m2, Pai::m2, Pai::m2,
		Pai::m3, Pai::m3, Pai::m3, Pai::m3,
		Pai::m4, Pai::m4, Pai::m4, Pai::m4,
		Pai::m5, Pai::m5,
		Pai::to
	},

	{
		Pai::m1, Pai::m1, Pai::m1,
		Pai::m3, Pai::m3, Pai::m3,
		Pai::m5, Pai::m5, Pai::m5,
		Pai::m7, Pai::m7,
		Pai::hk, Pai::hk,
		Pai::pe
	}
};

int SutehaiData::sutehai [][14] =
{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1 },
	{ 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0 },
	{ 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1 },

	{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
	{ 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1 },
	{ 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },

	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }
};
