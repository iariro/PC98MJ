#include "pai.h"
#include "data/machidt.h"

/**
 * @brief テンパイ判定テストデータ。
 *
 * @author kumagai
 *
 * @date 2010/11/17
 *	- kumagai:新規作成。
 */
Pai::PaiKind MachiTestData::data [71][2][13] =
{
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s3, Pai::s5,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na
		},
		{
			Pai::s4
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s8, Pai::s9,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na
		},
		{
			Pai::s7
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m2, Pai::m2,
			Pai::s5,
			Pai::to, Pai::to, Pai::to,
			Pai::hk, Pai::hk, Pai::hk
		},
		{
			Pai::s5
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m2, Pai::m2,
			Pai::p3, Pai::p4, Pai::p4, Pai::p5,
			Pai::to, Pai::to, Pai::to,
		},
		{
			Pai::p4
		}
	},
	{
		{
			Pai::p1, Pai::p1,
			Pai::p2, Pai::p2,
			Pai::p3, Pai::p3, Pai::p3, Pai::p3,
			Pai::pe, Pai::pe,
			Pai::hk, Pai::hk, Pai::hk
		},
		{
			Pai::pe
		}
	},
	{
		{
			Pai::s1,
			Pai::s2, Pai::s2,
			Pai::s3, Pai::s3, Pai::s3, Pai::s3,
			Pai::s4, Pai::s4,
			Pai::s5,
			Pai::hk, Pai::hk, Pai::hk
		},
		{
			Pai::s6
		}
	},
	{
		{
			Pai::s5, Pai::s5, Pai::s5, Pai::s5,
			Pai::s6, Pai::s7, Pai::s8,
			Pai::hk, Pai::hk, Pai::hk,
			Pai::ch, Pai::ch, Pai::ch
		},
		{
			Pai::s8
		}
	},

	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s3, Pai::s4,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh
		},
		{
			Pai::s2, Pai::s5
		}
	},
	{
		{
			Pai::m5, Pai::m5,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s3, Pai::s3, Pai::s3,
			Pai::to, Pai::to, Pai::to,
			Pai::ht, Pai::ht
		},
		{
			Pai::m5, Pai::ht
		}
	},
	{
		{
			Pai::s4, Pai::s5, Pai::s6, Pai::s7,
			Pai::hk, Pai::hk, Pai::hk,
			Pai::ht, Pai::ht, Pai::ht,
			Pai::ch, Pai::ch, Pai::ch
		},
		{
			Pai::s4, Pai::s7
		}
	},
	{
		{
			Pai::s3, Pai::s4, Pai::s5, Pai::s5,
			Pai::ht, Pai::ht, Pai::ht,
			Pai::hk, Pai::hk, Pai::hk,
			Pai::ch, Pai::ch, Pai::ch
		},
		{
			Pai::s2, Pai::s5
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s6, Pai::s6, Pai::s6, Pai::s8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::s7, Pai::s8
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::s6, Pai::s8, Pai::s8, Pai::s8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::s6, Pai::s7
		}
	},
	{
		{
			Pai::s2, Pai::s2, Pai::s2,
			Pai::s3, Pai::s4, Pai::s5, Pai::s7,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::s6, Pai::s7
		}
	},

	{
		{
			Pai::m2, Pai::m3, Pai::m4, Pai::m5, Pai::m6,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh
		},
		{
			Pai::m1, Pai::m4, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m3, Pai::m3, Pai::m3,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh, Pai::sh
		},
		{
			Pai::m1, Pai::m2, Pai::m4
		}
	},
	{
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh, Pai::sh
		},
		{
			Pai::m1, Pai::m4, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m3, Pai::m4,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh, Pai::sh
		},
		{
			Pai::m1, Pai::m4, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh, Pai::sh
		},
		{
			Pai::m3, Pai::m4, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m3, Pai::m4, Pai::m4, Pai::m4,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to,
			Pai::sh, Pai::sh
		},
		{
			Pai::m1, Pai::m4, Pai::sh
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m4, Pai::m4, Pai::m5,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m3, Pai::m4, Pai::m6
		}
	},
	{
		{
			Pai::m2, Pai::m3, Pai::m3, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m3, Pai::m4
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m4,
			Pai::m6, Pai::m6, Pai::m6,
			Pai::p2, Pai::p2, Pai::p2,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m3, Pai::m4, Pai::m5
		}
	},
	{
		{
			Pai::m1, Pai::m1,
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m2, Pai::m3
		}
	},
	{
		{
			Pai::m6, Pai::m6, Pai::m7,
			Pai::m8, Pai::m8, Pai::m8, Pai::m8,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m6, Pai::m7, Pai::m9
		}
	},
	{
		{
			Pai::m1, Pai::m1,
			Pai::m2, Pai::m2, Pai::m2, Pai::m2,
			Pai::m3,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m3, Pai::m4
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5,
			Pai::sh, Pai::sh,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m2, Pai::m5, Pai::sh
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::s6, Pai::s6,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m2, Pai::m5, Pai::s6
		}
	},
	{
		{
			Pai::m1, Pai::m1,
			Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m6, Pai::m6,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m2, Pai::m4
		}
	},
	{
		{
			Pai::m3, Pai::m3,
			Pai::m3, Pai::m4, Pai::m5,
			Pai::m6, Pai::m6, Pai::m7, Pai::m8, Pai::m8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m5, Pai::m7, Pai::m8
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m3, Pai::m4,
			Pai::m6, Pai::m7, Pai::m8, Pai::m9,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m5, Pai::m6, Pai::m9
		}
	},
	{
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m6, Pai::m7, Pai::m8,
			Pai::m9, Pai::m9, Pai::m9,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m4, Pai::m5
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m5
		},
		{
			Pai::m2, Pai::m5, Pai::m6
		}
	},
	{
		{
			Pai::m5, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6, Pai::m6,
			Pai::m7, Pai::m7, Pai::m7, Pai::m7,
			Pai::m8, Pai::m8, Pai::m8
		},
		{
			Pai::m4, Pai::m5, Pai::m8
		}
	},

	{
		{
			Pai::m2, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m2, Pai::m4, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m3, Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m3, Pai::m4, Pai::m6
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m2, Pai::m3, Pai::m4, Pai::m5
		}
	},
	{
		{
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5, Pai::m5,
			Pai::m6,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m3, Pai::m4, Pai::m6, Pai::m7
		}
	},
	{
		{
			Pai::m3, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5, Pai::m5,
			Pai::m6,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m3, Pai::m4, Pai::m6, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m3, Pai::m3,
			Pai::m4,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m2, Pai::m3, Pai::m4, Pai::m5
		}
	},
	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m3, Pai::m4, Pai::m5,
			Pai::m6, Pai::m7, Pai::m8,
			Pai::m9,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m2, Pai::m3, Pai::m6, Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7,
			Pai::m9, Pai::m9, Pai::m9,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m3, Pai::m4, Pai::m7, Pai::m8
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::s2, Pai::s3,
			Pai::s4, Pai::s4, Pai::s4,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1,
			Pai::m4,
			Pai::s1,
			Pai::s4
		}
	},
	{
		{
			Pai::p2, Pai::p2,
			Pai::p3, Pai::p3,
			Pai::p4, Pai::p4,
			Pai::p5, Pai::p5,
			Pai::p6, Pai::p6,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::p2, Pai::p3, Pai::p5, Pai::p6
		}
	},
	{
		{
			Pai::p2, Pai::p2, Pai::p2,
			Pai::p3, Pai::p4, Pai::p5,
			Pai::p6, Pai::p7,
			Pai::s4, Pai::s4,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::p2, Pai::p5, Pai::p8, Pai::s4
		}
	},
	{
		{
			Pai::p3, Pai::p3,
			Pai::p4, Pai::p4,
			Pai::p5, Pai::p5,
			Pai::p6, Pai::p6,
			Pai::s4, Pai::s5, Pai::s6,
			Pai::s6, Pai::s6
		},
		{
			Pai::p3, Pai::p6, Pai::s3, Pai::s6
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6,
			Pai::m7, Pai::m7
		},
		{
			Pai::m2, Pai::m5, Pai::m6, Pai::m7
		}
	},

	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m4, Pai::m5, Pai::m6,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m3, Pai::m4,
			Pai::m6, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::to, Pai::to, Pai::to,
			Pai::na, Pai::na, Pai::na
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m4, Pai::m5,
			Pai::m6, Pai::m7,
			Pai::s4, Pai::s5,
			Pai::s6, Pai::s6, Pai::s6,
		},
		{
			Pai::m2, Pai::m5, Pai::m8,
			Pai::s3, Pai::s6
		}
	},
	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m4, Pai::m4, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m2, Pai::m3, Pai::m4,
			Pai::m5, Pai::m6
		}
	},
	{
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m5,
			Pai::m6, Pai::m6,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m4, Pai::m5,
			Pai::m6, Pai::m7
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5, Pai::m5,
			Pai::m6,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m3, Pai::m4,
			Pai::m6, Pai::m7
		}
	},
	{
		{
			Pai::m3, Pai::m4, Pai::m5,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::m6, Pai::m7, Pai::m8, Pai::m9,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m3, Pai::m4, Pai::m6,
			Pai::m7, Pai::m9
		}
	},
	{
		{
			Pai::m2,
			Pai::m3, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6, Pai::m7, Pai::m8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m2, Pai::m4,
			Pai::m5, Pai::m8
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5,
			Pai::m6, Pai::m6,
			Pai::m6, Pai::m7, Pai::m8
		},
		{
			Pai::m2, Pai::m3, Pai::m5,
			Pai::m6, Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::m6, Pai::m6,
			Pai::m7, Pai::m7
		},
		{
			Pai::m2, Pai::m5, Pai::m6,
			Pai::m7, Pai::m8
		}
	},

	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m3, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7, Pai::m8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m2, Pai::m3, Pai::m5,
			Pai::m6, Pai::m8, Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6,
			Pai::m7
		},
		{
			Pai::m2, Pai::m3, Pai::m5,
			Pai::m6, Pai::m7, Pai::m8
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m5, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m5,
			Pai::m6, Pai::m7,
			Pai::m8, Pai::m8, Pai::m8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m3, Pai::m4,
			Pai::m6, Pai::m7, Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7, Pai::m8,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m2, Pai::m3, Pai::m5,
			Pai::m6, Pai::m8, Pai::m9
		}
	},

	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m3, Pai::m4, Pai::m5,
			Pai::m6, Pai::m6, Pai::m6,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7
		}
	},
	{
		{
			Pai::m2,
			Pai::m3, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7, Pai::m7, Pai::m7, Pai::m7,
			Pai::m8
		},
		{
			Pai::m1, Pai::m2, Pai::m4,
			Pai::m5, Pai::m6, Pai::m8,
			Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4, Pai::m4,
			Pai::m5,
			Pai::m6, Pai::m6, Pai::m6, Pai::m6,
			Pai::m7, Pai::m8
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m5, Pai::m7, Pai::m8,
			Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m2,
			Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m5,
			Pai::m6, Pai::m6,
			Pai::m7, Pai::m7, Pai::m7
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7
		}
	},

	{
		{
			Pai::m2, Pai::m2, Pai::m2,
			Pai::m3, Pai::m4, Pai::m5,
			Pai::m6,
			Pai::m7, Pai::m7, Pai::m7,
			Pai::to, Pai::to, Pai::to
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7, Pai::m8
		}
	},
	{
		{
			Pai::m2,
			Pai::m3, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7,
			Pai::m8, Pai::m8, Pai::m8
		},
		{
			Pai::m1, Pai::m2, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7,
			Pai::m8, Pai::m9
		}
	},
	{
		{
			Pai::m2, Pai::m3,
			Pai::m4, Pai::m4, Pai::m4, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7, Pai::m8,
			Pai::m9, Pai::m9, Pai::m9
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m5, Pai::m6, Pai::m7,
			Pai::m8, Pai::m9
		}
	},
	{
		{
			Pai::m1,
			Pai::m2,
			Pai::m3, Pai::m3, Pai::m3, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6, Pai::m7,
			Pai::m8, Pai::m8, Pai::m8
		},
		{
			Pai::m1, Pai::m2, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7,
			Pai::m8, Pai::m9
		}
	},

	{
		{
			Pai::m1, Pai::m1, Pai::m1,
			Pai::m2, Pai::m3, Pai::m4,
			Pai::m5, Pai::m6, Pai::m7, Pai::m8,
			Pai::m9, Pai::m9, Pai::m9
		},
		{
			Pai::m1, Pai::m2, Pai::m3,
			Pai::m4, Pai::m5, Pai::m6,
			Pai::m7, Pai::m8, Pai::m9
		}
	}
};

/**
 * @brief 待ち牌個数。
 *
 * @author kumagai
 *
 * @date 2010/11/17
 *	- kumagai:新規作成。
 */
int MachiTestData::machiNum [] =
{
	// 7 0-6
	1, 1, 1, 1, 1, 1, 1,

	// 7 7-13
	2, 2, 2, 2, 2, 2, 2,

	// 20 14-33
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,

	// 13 34-46
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,

	// 10 47-56
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,

	// 5 57-61
	6, 6, 6, 6, 6,

	// 4 62-65
	7, 7, 7, 7,

	// 4 66-69
	8, 8, 8, 8,

	// 1 70
	9
};
