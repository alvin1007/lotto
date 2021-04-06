#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, random = 0;
	while (1)
	{
		int usr_lotto[23] = { 0 }, lotto_num[23] = { 0 }, cnt_true = 0;
		srand(time(NULL));
		for (i = 0; i < 23; i++)
		{
			random = rand() % 2;
			lotto_num[i] = random;
		}
		for (i = 1; i < 24; i++)
		{
			printf("%d번째 숫자 입력 : ", i);
			scanf("%d", &usr_lotto[i]);
		}
		for (i = 0; i < 23; i++)
		{
			if (usr_lotto[i] == lotto_num[i])
			{
				cnt_true++;
			}
		}
		printf("\n");
		printf("로또 번호 : ");
		for (i = 0; i < 23; i++)
		{
			printf("%d", lotto_num[i]);
		}
		printf("\n\n");
		if (cnt_true == 23)
		{
			printf("1등입니다!");
		}
		else if (cnt_true < 23 && cnt_true >= 18)
		{
			printf("2등입니다!");
		}
		else if (cnt_true < 18 && cnt_true >= 13)
		{
			printf("3등입니다!");
		}
		else if (cnt_true < 13 && cnt_true >= 8)
		{
			printf("4등입니다!");
		}
		else if (cnt_true < 8 && cnt_true >= 3)
		{
			printf("5등입니다!");
		}
		else
		{
			printf("6등입니다!");
		}
		printf("\n\n\n\n");
	}
	return 0;
}
