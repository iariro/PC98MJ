
/**
 * @brief �̂Ĕv���B
 *
 * @author kumagai
 *
 * @date 2010/11/17
 *	- kumagai:�V�K�쐬�B
 */
class SutehaiPattern
{
private:
	static int SortPai(const void * pai1, const void * pai2);

public:
	int verbose;
	int sutehai [14];
	int loopCount;

public:
	SutehaiPattern(Pai::PaiKind machiArray []);
};
