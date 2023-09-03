#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 野指针1
void test1()
{
	/*
	int *p;
	*p = 2000;

	printf("*p = %d\n", *p);
	*/
}

// 野指针2
void test2()
{
	/*
	int *p = 10;	// 0~255 确定留给操作系统

	*p = 2000;

	printf("*p = %d\n", *p);
	*/
}

// 空指针
void test3()
{
	int *p = NULL;	// NULL == 0

	if (p != NULL)
	{
		*p = 300;
		printf("*p = %d\n", *p);
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
