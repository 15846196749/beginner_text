#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int day = 0;
	int hour = 0;
	int min = 0;
	int flag = 0;
	int count = 0;
	char a[4][61];
	int i = 0, j = 0;
	char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	scanf("%s %s %s %s",a[0],a[1],a[2],a[3]);
	int len1 = strlen(a[0]);
	int len2 = strlen(a[1]);
	int len = (len1 < len2) ? len1 : len2;
	for (j = 0; j < len; j++)
	{
		if (count == 0)
		{
			if (a[0][j] == a[1][j])
			{
				if ((a[0][j] - 'A' >= 0) && (a[0][j] - 'A' <= 6))
				{
					day = a[0][j] - 'A' ;
					count++;
					j++;
				}
			}
		}
		if (count == 1)
		{
			if (a[0][j] == a[1][j])
			{
				if ((a[0][j] - 'A' >= 0) && (a[0][j] - 'A' <= 13))
				{
					flag = 1;
					hour = a[0][j] - 'A' + 1;
					count++;
				}
				else if ((a[0][j] - '0' >= 0) && (a[0][j] - '0' <= 9))
				{
					hour = a[0][j] - '0';
					count++;
				}
			}
		}
		if (count == 2)
		{
			break;
		}
	}
	int len3 = strlen(a[2]);
	int len4 = strlen(a[3]);
	len = (len3 < len4) ? len3 : len4;
	for (j = 0; j < len; j++)
	{
		if (a[2][j] == a[3][j])
		{
			if (((a[2][j] - 'a' >= 0) && (a[2][j] - 'a' <= 26)) || ((a[2][j] - 'A' >= 0) && (a[2][j] - 'A' <= 26)))
			{
				min = j;
				break;
			}
		}
	}

	printf("%s ",week[day]);
	if (min == 60)
	{
		hour = hour + 1;
		min = 0;
	}
	if (flag == 1)
	{
		hour = hour + 9;
		printf("%d:",hour);
	}
	else
	{

		printf("0%d:", hour);
	}
	if (min <= 9)
	{
		printf("0");
	}
	printf("%d",min);
	return 0;
}