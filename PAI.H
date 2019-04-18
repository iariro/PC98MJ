
/**
 * @brief ”vî•ñB
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:V‹Kì¬B
 */
class Pai
{
public:
	enum PaiKind
	{
		m1, m2, m3, m4, m5, m6, m7, m8, m9,
		p1, p2, p3, p4, p5, p6, p7, p8, p9,
		s1, s2, s3, s4, s5, s6, s7, s8, s9,
		to, na, sh, pe,
		hk, ht, ch
	};

	static const int allKindNum/* = 9 * 3 + 4 + 3*/;
	static const int allNum /*= allKindNum * 4*/;

	static const char text [9 * 3 + 4 + 3][5];

	static int ComparePai(const void * pai1, const void * pai2);
};
