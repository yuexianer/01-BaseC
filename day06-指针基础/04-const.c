#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// –ﬁ Œ±‰¡ø
void test1()
{
	const int a = 20;
	int *p = &a;

	*p = 650;

	printf("%d\n", a);
}

// const int *p
void test2()
{
	int a = 10;
	int b = 20;
	const int *p = &a;

	// *p = 20;
	p = &b;
}

// int const *p
void test3()
{
	int a = 10;
	int b = 20;
	int const *p = &a;

	// *p = 20;
	p = &b;
}

// int * const p
void test4()
{
	int a = 10;
	int b = 20;
	int * const p = &a;

	*p = 20;
	// p = &b;
}

// const int * const p
void test5()
{
	int a = 10;
	int b = 20;
	const int * const p = &a;

	// *p = 20;
	// p = &b;
	
	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
}

int main(int argc, char* argv[])
{
	//test1();
	test5();

	system("pause");
	return 0;
}

#endif
