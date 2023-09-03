#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 函数申明
void bubble_sort(int arr[]);
void print_arr(int arr[]);

int main(int argc, char* argv[])
{
	printf("add = %d\n", add(4, 3));

	int arr[] = { 2, 3, 2, 6, 34, 7, 23, 6, 2, 53 };

	bubble_sort(arr);

	print_arr(arr);

	system("pause");
	return 0;	// 底层调用_exit() 退出
}

void bubble_sort(int arr[])
{
	int tmp;
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print_arr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int add(int a, int b)
{
	return a + b;
}

#endif
