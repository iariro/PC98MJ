#include "pai.h"
#include "paicount.h"

/**
 * @brief �w��̔v�z�񂩂�J�E���g�����\�z����B
 *
 * @author kumagai
 *
 * @param array �v�z��
 * @param num �v��
 *
 * @date 2010/11/17
 *	- kumagai:�V�K�쐬�B
 */
PaiCount::PaiCount(Pai::PaiKind array [], int num)
{
	for(int i=0 ; i<Pai::allKindNum ; i++)
	{
		this->array[i] = 0;
	}

	for(i=0 ; i<num ; i++)
	{
		this->array[array[i]]++;
	}
}