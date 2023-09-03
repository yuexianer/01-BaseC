#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 三目运算符
void test1()
{
	int a = 40;
	int b = 4;

	int m = a < b ? 69 : a < b ? 3 : 5; // 嵌套的三目运算符

	printf("m = %d\n", m);
	printf("%d\n", a > b ? 69 : 100);
}

// 逗号运算符
void test2()
{
	int a = 10, b = 20, c = 30;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	int x = (a = 1, c = 5, b = 2);

	printf("x = %d\n", x);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
}

int main(int argc, char *argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}
#endif
