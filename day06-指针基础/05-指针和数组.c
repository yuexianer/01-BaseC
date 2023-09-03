#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 操作数组元素的4种方法
void test1()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	int *p = a;

	printf("sizeof(a) = %u\n", sizeof(a));
	printf("sizeof(p) = %u\n", sizeof(p));

	for (int i = 0; i < n; i++)
	{
		// printf("%d ", a[i]);
		// printf("%d ", *(a + i));
		// printf("%d ", p[i]);
		printf("%d ", *(p + i));
	}

	putchar('\n');
}

// 使用指针++操作数组元素
void test2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("first p = %p\n", p);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p);
		p++; // p = p + 1; 一次加过一个int大小， 一个元素
	}
	putchar('\n');

	printf("last p = %p\n", p);
}

void test3()
{
	srand(time(NULL));
	int arr[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;

	for (int i = 0; i < n; i++)
	{
		*(p + i) = rand() % 100;	// *(p + i) == arr[i]
	}								// p 指向数组的首地址

	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p);
		p++;		
	}								// p 指针指向一块无效的内存区域，p为 野指针
	printf("\n");

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
