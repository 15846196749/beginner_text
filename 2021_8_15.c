#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);//判断一个数是否为奇数
	if (a % 2 == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}//判断一个数是否为奇数
	int b = 1;
	while (b < 100)
	{
		if (b % 2 == 1)
		{
			printf("%d ",b);
		}
		b++;
	}


	return 0;
}