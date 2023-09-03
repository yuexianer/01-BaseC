#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 指针数组1
void test1()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	int *arr[] = { p1, p2, p3 };	// 整型指针数组arr，存的都是整型地址

	printf("*(arr[0]) = %d\n", *(*(arr + 0)));
	
	printf("*(arr[0]) = %d\n", **arr);
}

// 指针数组2
void test2()
{
	int a[] = { 10 };
	int b[] = { 20 };
	int c[] = { 30 };

	int *arr[] = { a, b, c };

	printf("*(arr[0]) = %d\n", *(*(arr + 0))); // arr[0] == *(arr+0)
	printf("*(arr[0]) = %d\n", **arr);
}

int main(int argc, char* argv[])
{
	//test1();
	test2();

	system("pause");
	return 0;
}

#endif
