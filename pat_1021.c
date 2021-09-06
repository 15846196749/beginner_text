#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001] = { 0 };
	scanf("%s",a);
	int b[10] = { 0 };
	int i = 0;
	int A = 0;
	int n = strlen(a);
	for (i = 0; i < n; i++)
	{
		A = a[i] - '0';
		switch (A)
		{
		case 0:b[0]++;
			break;
		case 1:b[1]++;
			break;
		case 2:b[2]++;
			break;
		case 3:b[3]++;
			break;
		case 4:b[4]++;
			break;
		case 5:b[5]++;
			break;
		case 6:b[6]++;
			break;
		case 7:b[7]++;
			break;
		case 8:b[8]++;
			break;
		case 9:b[9]++;
			break;
		}
	}
	int flag = 1;
	for (i= 0; i < 9; i++)
	{
		if (b[i] == 0)
			continue;
		if (flag == 0)
		{
			printf("\n");
		}
		flag = 0;
		printf("%d:%d", i, b[i]);
	}
	return 0;
}