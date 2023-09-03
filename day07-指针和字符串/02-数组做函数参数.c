#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


void BubbleSort(int arr[], int n)
{
	printf("BubbleSort: sizeof(arr) = %u\n", sizeof(arr));

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int arr[] = { 2, 32, 53, 89, 23, 5, 32, 5, 75, 3, 86, 54, 3, 3, 5, 45, 45, 3, 43, 76, 43, };

	printf("main: sizeof(arr) = %u\n", sizeof(arr));

	int n = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	system("pause");
	return 0;
}

#endif
