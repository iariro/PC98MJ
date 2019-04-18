
/**
 * @brief 牌とランダム値のペア。
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
class PaiAndRandomValue
{
public:
	Pai::PaiKind pai;
	int randomValue;

public:
	PaiAndRandomValue(Pai::PaiKind pai);
};

/**
 * @brief すべての牌。
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:新規作成。
 */
class AllPai
{
private:
	static int ComparePaiAndRandomValue
		(const void * pai1, const void * pai2);

public:
	int offset;
	Pai::PaiKind allPai [136];

public:
	AllPai();

	int HasPai(void);
	Pai::PaiKind GetPai(void);
};
