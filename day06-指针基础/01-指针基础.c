#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void test1()
{
	int a = 10;
	int *p = &a;
	
	*p = 2000;

	printf("a = %d\n", a);
}

void test2()
{
	int a = 10;
	int *p = &a;
	
	a = 3600;

	printf("*p = %d\n", *p);
}

// 各种指针的内存大小
void test3()
{
	printf("sizeof(char *) = %u\n", sizeof(char *));
	printf("sizeof(short *) = %u\n", sizeof(short *));
	printf("sizeof(int *) = %u\n", sizeof(int *));
	printf("sizeof(long *) = %u\n", sizeof(long *));
	printf("sizeof(long long *) = %u\n", sizeof(long long *));
	printf("sizeof(float *) = %u\n", sizeof(float *));
	printf("sizeof(double *) = %u\n", sizeof(double *));
	printf("sizeof(void *) = %u\n", sizeof(void *));
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
