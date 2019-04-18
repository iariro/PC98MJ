#include <stdio.h>
#include "pai.h"
#include "paicount.h"
#include "mentuptn.h"
#include "machiptn.h"
#include "suteptn.h"
#include "data/machidt.h"
#include "data/sutedata.h"

void machiTest()
{
	Pai::PaiKind machi [13];
	int goukakuCount = 0;
	int fugoukakuCount = 0;

	for(unsigned int i=0 ;
		i<sizeof(MachiTestData::data)/sizeof(MachiTestData::data[0]) ;
		i++)
	{
		MachiPattern pattern(0, 0);

		printf("%2d:", i);

		PaiCount count(MachiTestData::data[i][0], 13);

		pattern.MakeMentsu(MachiTestData::data[i][0], 13);

		int machiCount = pattern.GetMachi(machi, &count);

		int goukaku;

		if(machiCount == MachiTestData::machiNum[i])
		{
			goukaku = 1;

			for(unsigned int j=0 ;
				goukaku && j<sizeof(MachiTestData::data[i][1])/sizeof(MachiTestData::data[i][1]) ;
				j++)
			{
				if(MachiTestData::data[i][1][j] != machi[j])
				{
					goukaku = 0;
				}
			}
		}
		else
		{
			goukaku = 0;
		}

		if(goukaku)
		{
			goukakuCount++;
		}
		else
		{
			fugoukakuCount++;

			for(int j=0 ; j<13 ; j++)
			{
				if(j > 0)
				{
					printf(" ");
				}

				printf("%s", Pai::text[MachiTestData::data[i][0][j]]);
			}
			puts("");

			pattern.PrintMachi();
		}

		printf(
			"machiCount=%d loopCount=%3d %s\n",
			machiCount,
			pattern.loopCount,
			goukaku ? "goukaku" : "fugoukaku");
	}

	printf("goukaku=%d fugoukaku=%d\n", goukakuCount, fugoukakuCount);
}

void sutehaiTest()
{
	int goukakuCount = 0;
	int fugoukakuCount = 0;

	for(unsigned int i=0 ; i<sizeof(SutehaiData::tehai)/sizeof(SutehaiData::tehai[0])&& fugoukakuCount <= 0 ; i++)
	{
		printf("%2d:", i);

		SutehaiPattern pattern(SutehaiData::tehai[i]);

		printf("loopCount=%4d ", pattern.loopCount);

		int goukaku = 1;
		for(int j=0 ; j<14 && goukaku ; j++)
		{
			goukaku = pattern.sutehai[j] == SutehaiData::sutehai[i][j];
		}

		if(goukaku)
		{
			goukakuCount++;
			printf("goukaku\n");
		}
		else
		{
			for(int j=0 ; j<14 ; j++)
			{
				if(j > 0)
				{
					printf(" ");
				}

				printf("%s", Pai::text[SutehaiData::tehai[i][j]]);
			}
			printf("\n");

			for(j=0 ; j<14 ; j++)
			{
				if(pattern.sutehai[j])
				{
					printf("%s", Pai::text[SutehaiData::tehai[i][j]]);
				}
			}
			printf("ŽÌ‚Ä ");

			fugoukakuCount++;
			printf("fugoukaku\n");
		}
	}

	printf("goukaku=%d fugoukaku=%d\n", goukakuCount, fugoukakuCount);
}

int main(void)
{
	machiTest();
	sutehaiTest();

	return 0;
}
