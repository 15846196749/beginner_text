#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int HPDataType;

void swap(HPDataType* x, HPDataType* y)
{
	HPDataType tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void _AdjustDown(HPDataType* a, size_t size, size_t root)
{
	size_t parent = root;
	size_t child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}

}

void AdjustDown(HPDataType* a, size_t size, size_t root)
{
	size_t parent = root;
	size_t child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])
		{
			child++;
		}
		if (a[parent] > a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}

}

void HeapSortDown(int* a, int size)
{
	int i = (size - 1 - 1) / 2;
	while (i >= 0)
	{
		AdjustDown(a, size, i);
		i--;
	}
	int end = size - 1;
	while (end > 0)
	{
		int temp = a[0];
		a[0] = a[end];
		a[end] = temp;
		end--;
		size--;
		AdjustDown(a, size, 0);
	}
}

void HeapSortUp(int* a, int size)
{
	int i = (size - 1 - 1) / 2;
	while (i >= 0)
	{
		_AdjustDown(a, size, i);
		i--;
	}
	int end = size - 1;
	while (end > 0)
	{
		int temp = a[0];
		a[0] = a[end];
		a[end] = temp;
		end--;
		size--;
		_AdjustDown(a, size, 0);
	}
}

void Top_K(int* a,int size ,int k)
{
	for (int i = 0; i < k; i++)
	{
		AdjustDown(a, k, i);
	}
	for (int i = k; i < size; i++)
	{
		if (a[i] > a[0])
		{
			swap(&a[i], &a[0]);
			AdjustDown(a, k, 0);
		}
	}
}

int main()
{
	//int a[10] = { 3,7,24,12,9,14,34,40,56,78 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("\n");
	////½µÐò
	//HeapSortDown(a, 10);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("\n");
	////ÉýÐò
	//HeapSortUp(a, 10);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("\n");


	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (size_t i = 0; i < n; ++i)
	{
		a[i] = rand() % 1000000;
	}
	a[5] = 1000000 + 1;
	a[1231] = 1000000 + 2;
	a[531] = 1000000 + 3;
	a[5121] = 1000000 + 4;
	a[115] = 1000000 + 5;
	a[2335] = 1000000 + 6;
	a[9999] = 1000000 + 7;
	a[76] = 1000000 + 8;
	a[423] = 1000000 + 9;
	a[3144] = 1000000 + 10;
	Top_K(a, n, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}