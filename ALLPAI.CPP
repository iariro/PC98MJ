#include <stdio.h>
#include <stdlib.h>
#include "pai.h"
#include "allpai.h"

/**
 * @brief �w��̔v���W��A�܂������_���l�����蓖�ăI�u�W�F�N�g���\�z�B
 *
 * @author kumagai
 *
 * @param pai �v
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
 */
PaiAndRandomValue::PaiAndRandomValue(Pai::PaiKind pai)
	: pai(pai)
{
	randomValue = ::rand();
}

/**
 * @brief PaiAndRandomValue�I�u�W�F�N�g�̃����_���l�ɂ���r�B
 *
 * @author kumagai
 *
 * @param pai1 �l�P
 * @param pai2 �l�Q
 *
 * @return 1/0/-1�ɂ���r����
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
 */
int AllPai::ComparePaiAndRandomValue(const void * pai1, const void * pai2)
{
	PaiAndRandomValue ** pai11 = (PaiAndRandomValue **)pai1;
	PaiAndRandomValue ** pai22 = (PaiAndRandomValue **)pai2;

	if((*pai11)->randomValue > (*pai22)->randomValue)
	{
		// �P�̕����傫���B

		return 1;
	}
	else if((*pai11)->randomValue < (*pai22)->randomValue)
	{
		// �Q�̕����傫���B

		return -1;
	}
	else
	{
		// �����B

		return 0;
	}
}

/**
 * @brief �����_���������S�v�R���N�V�����𐶐��B
 *
 * @author kumagai
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
 */
AllPai::AllPai()
	: offset(0)
{
	PaiAndRandomValue ** paiAndRandomValues =
		new PaiAndRandomValue * [Pai::allNum];

	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		for(int j=0 ; j<4 ; j++)
		{
			paiAndRandomValues[i * 4 + j] =
				new PaiAndRandomValue((Pai::PaiKind)i);
		}
	}

	::qsort(
		paiAndRandomValues,
		Pai::allNum,
		sizeof(PaiAndRandomValue *),
		ComparePaiAndRandomValue);

	for(i=0 ; i<Pai::allNum ; i++)
	{
		allPai[i] = paiAndRandomValues[i]->pai;
		delete paiAndRandomValues[i];
	}

	delete [] paiAndRandomValues;
}

/**
 * @brief �܂��v�����邩���擾�B
 *
 * @author kumagai
 *
 * @return true=����^false=�Ȃ�
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
 */
int AllPai::HasPai(void)
{
	return offset < Pai::allNum;
}

/**
 * @brief �v���P�擾�B
 *
 * @author kumagai
 *
 * @return �v�P��
 *
 * @date 2010/11/18
 *	- kumagai:�V�K�쐬�B
 */
Pai::PaiKind AllPai::GetPai(void)
{
	Pai::PaiKind pai = allPai[offset];

	offset++;

	return pai;
}