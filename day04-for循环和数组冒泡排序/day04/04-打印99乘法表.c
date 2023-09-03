#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 正序99乘法表
void test1()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%2d\t", j, i, i * j);
		printf("\n");
	}
}

// 倒序99乘法表
void test2()
{
	for (int i = 9; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%2d\t", j, i, i * j);
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	test1();
	// test2();
	system("pause");
	return 0;
}
#endif
