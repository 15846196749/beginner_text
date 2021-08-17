#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int n_factorial(int n);
int sum_10_factorial();
void showchar(char arr1[],char arr2[]);
void login(char arr3[]);
int main()
{
	/*int n = 0;
	scanf("%d",&n);
	char arr1[] = { "Hello world" };
	char arr2[] = {"###########"};
	int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n",n_factorial(n));
	printf("%d\n",sum_10_factorial());
	showchar(arr1,arr2);*/
	char arr3[] = { "14124416bubian" };
	login(arr3);
	return 0;
}
int n_factorial(int n)
{
	if (n == 1)
		return 1;
	int num = 1;
	while (n)
	{
		num = num * n;
		n--;
	}
	return num;
}
int sum_10_factorial()
{
	int sum = 0;
	int i = 0;
	int num = 1;
	for (i = 1; i<=10;i++)
	{
		num = num * i;
		sum = sum + num;
	}


	return sum;
}
void showchar(char arr1[], char arr2[])
{
	int left = 0;
	int right = strlen(arr1)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		left++;
		right--;
	}
}
void login(char arr3[])
{
	printf("请输入密码\n");
	char secret[15];
	scanf("%s",secret);
	int times = 0;
	int left = 0;
	int right = 13;
	while (left <= right)
	{
		if (times >= 2)
		{
			printf("退出程序 \n");
			break;
		}
		if (arr3[left] == secret[left])
		{
			left++;
		}
		else if((left!=right)||(arr3[left] != secret[left]))
		{
			printf("密码错误，重新输入\n");
			scanf("%s", secret);
			times++;
		}
	}
	if (times < 2)
	{
		printf("输入正确\n");
	}
}