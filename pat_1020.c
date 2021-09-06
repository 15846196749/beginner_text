#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct kindof
{
	float money;
	float sale;
	float quantity;
}kindof;
int cmp(const void* a, const void * b);
int main()
{
	int N = 0;
	scanf("%d", &N);
	float D = 0;
	if(N!=0)
	scanf("%f", &D);
	kindof* moon = (kindof*)malloc(sizeof(kindof) * 1000);
	int i = 0;
	for (i = 0; i < N; i++)
		scanf("%f", &moon[i].quantity);
	for (i = 0; i < N; i++)
	{
		scanf("%f", &moon[i].money);
		moon[i].sale = moon[i].money / moon[i].quantity;
	}
	float sumq = 0;
	for (i = 0; i < N; i++)
	{
		sumq = sumq + moon[i].quantity;
	}
	if (sumq < D)
	{
		D =  sumq;
	}
	qsort(moon, N, sizeof(kindof), cmp);
	float sum = 0;
	i = 0;
	while (D)
	{
		if (D > moon[i].quantity)
		{
			sum = sum + moon[i].money;
			D = D - moon[i].quantity;
		}
		else
		{
			sum = sum + D * moon[i].sale;
			D = 0;
		}
		i++;
	}
	printf("%.2f", sum);
	return 0;
}
int cmp(const void* a, const void* b)
{
	if ((*((kindof*)a)).sale > (*((kindof*)b)).sale)
	{
		return -1;
	}
	if ((*((kindof*)a)).sale < (*((kindof*)b)).sale)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}