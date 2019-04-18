
/**
 * @brief 待ちパターン。
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
 */
class MachiPattern
	: public MentsuPattern
{
public:
	int verbose;
	int breakOnFindOne;
	int machi [34];

public:
	MachiPattern(int verbose, int breakOnFindOne);

	void PrintMachi();
	int GetMachi(Pai::PaiKind machiArray [], PaiCount * paiCount);

protected:
	int OnFind3Mentsu(Pai::PaiKind tehai [], int totalNum,
		int * use2);
};
