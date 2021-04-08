#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void persent1(void)
{
	int lotto_num, random;
	srand(time(NULL));
	random = rand() % 2;
	printf("\n첫번째 입력 (0 ~ 1) : ");
	scanf("%d", &lotto_num);
	if (lotto_num == random)
	{
		printf("정답 : %d\n\n", random);
		printf("당첨입니다!\n\n\n\n");
	}
	else
	{
		printf("정답 : %d\n", random);
		printf("아쉽게도 다른 숫자입니다.\n\n\n\n");
	}
}

void persent2(void)
{
	int lotto_num, random, cnt = 0, random_arr[2];
	for (int i = 0; i < 2; i++)
	{
		srand(time(NULL));
		random = rand() % 2;
		printf("%d번째 입력 (0 ~ 1) : ", i + 1);
		scanf("%d", &lotto_num);
		if (lotto_num == random)
		{
			cnt++;
		}
		random_arr[i] = random;
	}
	if (cnt == 2)
	{
		printf("정답 : ");
		for (int i = 0; i < 2; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("당첨입니다!\n\n\n\n");
	}
	else
	{
		printf("정답 : ");
		for (int i = 0; i < 2; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("아쉽지만 다른 숫자입니다.\n\n\n\n");
	}
}

void persent3(void)
{
	int lotto_num, random, cnt = 0, random_arr[2];
	for (int i = 0; i < 2; i++)
	{
		srand(time(NULL));
		random = rand() % 10;
		printf("%d번째 입력 (0 ~ 9) : ", i + 1);
		scanf("%d", &lotto_num);
		if (lotto_num == random)
		{
			cnt++;
		}
		random_arr[i] = random;
	}
	if (cnt == 2)
	{
		printf("정답 : ");
		for (int i = 0; i < 2; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("당첨입니다!\n\n\n\n");
	}
	else
	{
		printf("정답 : ");
		for (int i = 0; i < 2; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("아쉽지만 다른 숫자입니다.\n\n\n\n");
	}
}

void persent4(void)
{
	int lotto_num, random, cnt = 0, random_arr[4];
	for (int i = 0; i < 4; i++)
	{
		srand(time(NULL));
		random = rand() % 10;
		printf("%d번째 입력 (0 ~ 9) : ", i + 1);
		scanf("%d", &lotto_num);
		if (lotto_num == random)
		{
			cnt++;
		}
		random_arr[i] = random;
	}
	if (cnt == 4)
	{
		printf("정답 : ");
		for (int i = 0; i < 4; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("당첨입니다!\n\n\n\n");
	}
	else
	{
		printf("정답 : ");
		for (int i = 0; i < 4; i++)
		{
			printf("%d ", random_arr[i]);
		}
		printf("\n\n");
		printf("아쉽지만 다른 숫자입니다.\n\n\n\n");
	}
}

int main()
{
	int mode;
	while (1)
	{
		printf("확률 선택\n\n50%% 모드(1)     25%% 모드(2)     1%% 모드(3)     0.01%% 모드(4)\n\n입력 : ");
		scanf("%d", &mode);
		if (mode == 1)
		{
			printf("\n");
			persent1();
		}
		else if (mode == 2)
		{
			printf("\n");
			persent2();
		}
		else if (mode == 3)
		{
			printf("\n");
			persent3();
		}
		else if (mode == 4)
		{
			printf("\n");
			persent4();
		}
	}
	return 0;
}
