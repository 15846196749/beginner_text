#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);//�ж�һ�����Ƿ�Ϊ����
	if (a % 2 == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}//�ж�һ�����Ƿ�Ϊ����
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