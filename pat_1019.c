#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int rise_cmp(const void* e1,const void* e2);
int down_cmp(const void* e1,const void* e2);
void print(int a, int b);
int main()
{
	int n = 0;
	scanf("%d",&n);
	int a[4] = { 0 };
	//int b[4] = { 0 };
	int down = 0;
	int rise = 0;
	int i = 0;
	int count = 0;
	int num = 0;
	if ((n % 10 == n / 10 % 10) && (n / 10 % 10 == n / 100 % 10) && (n / 100 % 10 == n / 1000 % 10))
	{
		printf("%04d - %04d = 0000\n", n, n);
		return 0;
	}
	do
	{
		num = n;
		i = 0;
		while (num)
		{
			a[i] = num % 10;
			num = num / 10;
			i++;
		}
		qsort(a, 4, 4, rise_cmp);
		rise = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		qsort(a, 4, 4, down_cmp);
		down = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		n = down - rise;
		printf("%04d - %04d = %04d\n", down, rise, n);
	} while (n!=6174);
	return 0;
}
int rise_cmp(void* e1, void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
int down_cmp(void* e1, void* e2)
{
	return *((int*)e2) - *((int*)e1);
}