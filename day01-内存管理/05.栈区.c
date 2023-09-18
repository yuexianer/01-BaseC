#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int *myFunc()
{
	int a = 10;
	return &a;
}

void test01()
{
	// 局部变量a早已被释放，没有权限访问这块内存空间
	int *p = myFunc();
	printf("*p = %d\n", *p);
	printf("*p = %d\n", *p);
}

char *getString()
{
	char str[] = "hello world";
	return str;
}

void test02()
{
	char *p = NULL;
	p = getString();
	printf("p = %s\n", p);
}

int main(int argc, char* argv[])
{
	test01();
	test02();

	system("pause");
	return 0;
}

#endif
