
/**
 * @brief 面子パターン検索。
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:新規作成。
 */
class MentsuPattern
{
private:
	int loop;
public:
	int loopCount;

public:
	void MakeMentsu(Pai::PaiKind tehai [], int totalNum);

protected:
	virtual int OnFind3Mentsu(Pai::PaiKind tehai [], int totalNum,
		int * use2) = 0;

private:
	void MakeMentsuRecursive(Pai::PaiKind tehai [], int totalNum, int * use1,
		int * use2, int mentsu1, int mentsu2, int mentsuCount, int mentsuCount2,
		int level, int start);
};
