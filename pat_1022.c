#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int pow(int a, int b);
int main()
{
	int A = 0;
	int B = 0;
	scanf("%d %d", &A, &B);
	int C = A + B;
	if (C < 0)
	{

	}
	int E = C;
	int i = 0;
	int ret = 1;
	int D = 0;
	scanf("%d", &D);
	while (E)
	{
		E = E / D;
		i++;
	}
	if (i == 0)
	{
		printf("%d", C);
		return 0;
	}
	int b[32] = { 0 };
	i = i - 1;
	int n = i;

	while (C >= D)
	{
		ret = pow(D, i);
		if (ret <= C)
		{
			b[i] = C / ret;
			C = C - ret * b[i];
			i--;
		}
		if (i == 0)
		{
			break;
		}
	}
	b[0] = C;
		for (i = n ; i >= 0; i--)
		{
			printf("%d", b[i]);
		}
	return 0;
}
int pow(int a, int b)
{
	int cn = 1;
	int i = 0;
	if (b == 0)
	{
		return 1;
	}
	for (i = 0; i < b; i++)
	{
		cn = cn * a;
	}
	return cn;
}