#if 0 

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14

void test1()
{
	int a = 10;
	int b = 20;

	int c = a + b;

	int d = 34 / 10;

	printf("c = %d\n", c);
	printf("d = %d\n", d);
}

void test2()
{
	int a = 10;
	int b = 50;
	
	printf("a = %d\n", a ++);
	printf("a = %d\n", a);

	printf("b = %d\n", ++b);
	printf("b = %d\n", b);
}

int main(int argc, char *argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}
#endif



