#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int if_primenum(int a);
int if_leapyear(int a);
int searcharr(int a, int arr[]);
void num_plus(int* num);
int main()
{
	int a = 0;
	int num = 0;
	scanf("%d",&a);
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("%d\n", if_primenum(a));
	printf("%d\n",if_leapyear(a));
	printf("%d\n", searcharr(a, arr));
	num_plus(&num);
	printf("%d",num);
	return 0;
}
int if_primenum(int a)
{
	int i = 2;
	if (a > 1)
	{
		for (i=2;i<a;i++)
		{
			if (a % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	else return 0;
}
int if_leapyear(int a)
{
	if ((a % 4 == 0) && (a % 100 != 0))
	{
		return 1;
	}
	else if (a % 400 == 0)
	{
		return 1;
	}
	else return 0;
}
int searcharr(int a, int arr[])
{
	int i = 0;
	int j = 9;
	int num = 0;
		while (i != j)
		{
			num = arr[(i + j) / 2];
			if (num == a)
				return (i + j) / 2;
			else
			{
				if (a > arr[(i + j) / 2])
				{
					i = (i + j) / 2;
				}
				else
				{
					j = (i + j) / 2;
				}
			}
		}
		return -1;
	}
void num_plus(int* num)
{
	(*num)++;
}
