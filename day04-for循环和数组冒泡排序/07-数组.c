#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 数组的地址与数组首元素的地址一样
void test1()
{
	int a = 5, b = 29, c = 10;
	int arr[10] = { 1, 2, 4, 5, 7, 23, 54, 3, 4, 3 };

	printf("&arr[0] = %p\n", &arr[0]); // 取数组首元素的地址
	printf("arr = %p\n", arr);	// 数组名
}

// 数组的一些基本信息
void test2()
{
	int arr[12] = { 1, 43, 3, 4, 2, 4, 23, 6, 8, 34, 3, 5 };

	printf("数组大小: %u\n", sizeof(arr));
	printf("数组元素的大小: %u\n", sizeof(arr[0]));
	printf("数组元素个数: %d\n", sizeof(arr) / sizeof(arr[0]));
}

// 数组的初始化
void test3()
{
	int arr[10];
	arr[0] = 5;
	arr[1] = 4;
	arr[3] = 56; 

	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

}

int main(int argc, char* argv[])
{
	// test1();
	// test2();
	test3();
	system("pause");
	return 0;
}

#endif
