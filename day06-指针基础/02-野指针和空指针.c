#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// Ұָ��1
void test1()
{
	/*
	int *p;
	*p = 2000;

	printf("*p = %d\n", *p);
	*/
}

// Ұָ��2
void test2()
{
	/*
	int *p = 10;	// 0~255 ȷ����������ϵͳ

	*p = 2000;

	printf("*p = %d\n", *p);
	*/
}

// ��ָ��
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
