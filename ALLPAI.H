
/**
 * @brief �v�ƃ����_���l�̃y�A�B
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
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
 * @brief ���ׂĂ̔v�B
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
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