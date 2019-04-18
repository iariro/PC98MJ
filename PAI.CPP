#include "pai.h"

const int Pai::allKindNum = 9 * 3 + 4 + 3;
const int Pai::allNum = (9 * 3 + 4 + 3) * 4;

/**
 * @brief �v�e�L�X�g�B
 *
 * @author kumagai
 *
 * @date 2010/11/15
 *	- kumagai:�V�K�쐬�B
 */
const char Pai::text [34][5] =
{
	"����", "����", "�O��", "�l��", "����", "�Z��", "����", "����", "����",
	"�ꓛ", "��", "�O��", "�l��", "�ܓ�", "�Z��", "����", "����", "�㓛",
	"���", "���", "�O��", "�l��", "�܍�", "�Z��", "����", "����", "���",
	" �� ", " �� ", " �� ", " �k ",
	" �� ", " � ", " �� "
};

/**
 * @brief �\�[�g�p�v��r�B
 *
 * @author kumagai
 *
 * @param pai1 �v�P
 * @param pai2 �v�Q
 *
 * @return 1/0/-1�ɂ���r����
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
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