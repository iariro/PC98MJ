#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"
#include "suteptn.h"
#include "machiptn.h"
#include "allpai.h"

int main()
{
	::srand(::time(NULL));

	int dahaiIndex;
	int machiCount;
	AllPai allPai;
	Pai::PaiKind machi[13];
	Pai::PaiKind tehai[13];
	Pai::PaiKind tehaiAndTsumo[14];
	Pai::PaiKind tsumo;

	// �z�v�B
	for(int i=0 ; i<13 ; i++)
	{
		tehai[i] = allPai.GetPai();
	}

	int loop = 1;

	do
	{
		// ���v�B
		::qsort(tehai, 13, sizeof(Pai::PaiKind), Pai::ComparePai);

		if(allPai.HasPai())
		{
			// �c���B
			tsumo = allPai.GetPai();

			// ���[�`�錾�v����B
			for(int i=0 ; i<13 ; i++)
			{
				tehaiAndTsumo[i] = tehai[i];
			}
			tehaiAndTsumo[13] = tsumo;

			SutehaiPattern sutehaiPattern(tehaiAndTsumo);

			// �v�\���B
			for(i=0 ; i<14 ; i++)
			{
				if(i == 13)
				{
					printf(" ");
				}

				if(sutehaiPattern.sutehai[i])
				{
					printf(" vv  ");
				}
				else
				{
					printf("     ");
				}
			}
			puts("");

			for(i=0 ; i<13 ; i++)
			{
				printf("[%2d] ", i + 1);
			}
			puts(" [14]");

			for(i=0 ; i<13 ; i++)
			{
				printf("%s ", Pai::text[tehai[i]]);
			}
			printf(" %s\n", Pai::text[tsumo]);

			// �҂��v�\���B
			MachiPattern pattern(0, 0);
			PaiCount count(tehai, 13);

			pattern.MakeMentsu(tehai, 13);

			machiCount = pattern.GetMachi(machi, &count);

			if(machiCount > 0)
			{
				for(int i=0 ; i<machiCount ; i++)
				{
					printf("[%s]", Pai::text[machi[i]]);
				}
				printf("�҂�\n");
			}

			int atari = 0;
			for(i=0 ; i<machiCount && !atari ; i++)
			{
				atari = tsumo == machi[i];
			}

			if(atari)
			{
				int agariAnswer;

				do
				{
					printf("�a�� 1:yes 0:no> ");
					scanf("%d", &agariAnswer);
				}
				while(agariAnswer != 1 && agariAnswer != 0);

				if(agariAnswer == 1)
				{
					printf("�a��\n");
					loop = 0;
				}
			}

			if(loop)
			{
				printf("> ");

				// �Ŕv�B
				scanf("%d", &dahaiIndex);

				if(dahaiIndex > 0)
				{
					if(dahaiIndex < 14)
					{
						tehai[dahaiIndex - 1] = tsumo;
					}
				}
				else
				{
					loop = 0;
				}
			}
		}
		else
		{
			loop = 0;
		}
	}
	while(loop);

	return 0;
}
