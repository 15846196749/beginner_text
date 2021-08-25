#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A = 0, B = 0, DA = 0, DB = 0;
	int pa = 0, pb = 0;
	int counta = 0, countb = 0;
	scanf("%d %d %d %d",&A,&DA,&B,&DB);
	while (A)
	{
		if (A % 10 == DA)
		{
			counta++;
			A = A / 10;
		}
		else
		{
			A = A / 10;
		}
	}
	int i = 0;
	for (i = 0; i < counta; i++)
	{
		pa = pa * 10 + DA;
	}
	while (B)
	{
		if (B % 10 == DB)
		{
			countb++;
			B = B / 10;
		}
		else
		{
			B = B / 10;
		}
	}
	for (i = 0; i < countb; i++)
	{
		pb = pb * 10 + DB;
	}
	printf("%d\n", pa + pb);

	return 0;
}