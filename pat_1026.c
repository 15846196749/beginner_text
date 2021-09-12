#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	char a;
	scanf("%d %c", &num, &a);
	int i = 1, y = 0;
	if (num % 2 == 0)
	{
		num = num - 1;
		y++;
	}
	//≈ºªÚ∆Ê

	if (num < 7)
	{
		y = y + num - 1;
	}
	num = (num - 1) / 2;
	while (num >= 2 * i + 1)
	{
		num = num - (i * 2 + 1);
		if ((num!=0)&&(num < (i * 2 + 1)))
		{
			y = num * 2 + y;
		}
		i++;
	}
	int m = 0, n = 0;
	int flag = 0;
	int c = 0;
	for (m = i-1 ; m > 0; m--)
	{
		if (flag)
		{
			for (c = 0; c < flag; c++)
			{
				printf(" ");
			}
		}
		for (n = 0; n < 2 * m + 1; n++)
		{
			printf("%c", a);
		}
		printf("\n");
		flag++;
	}
	for (c = 0; c < flag; c++)
		printf(" ");
	printf("%c\n", a);
	flag--;
	for (m =1; m < i ; m++)
	{
		for (c = flag; c > 0; c--)
			printf(" ");
		for (n = 0; n < 2 * m + 1; n++)
		{
			printf("%c", a);
		}
		printf("\n");
		flag--;
	}
		printf("%d", y);
	return 0;
}