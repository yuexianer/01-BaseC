#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// gets
void test1()
{
	char str[100];

	printf("获取的字符串为: %s\n", gets(str));

}

// fgets
void test2()
{
	char str[10];

	printf("获取的字符串为: %s\n", fgets(str, sizeof(str), stdin));

}

// puts
void test3()
{
	char str[] = "helllo world\n";

	int ret = puts(str);	// puts("hello world");

	printf("ret = %d\n", ret);
}


// fputs
void test4()
{
	char str[] = "hello world\n";

	// int ret = fputs(str, stdout);

	int ret = fputs("hello world\n", stdout);

	printf("ret = %d\n", ret);
}

// strlen()函数: 获取字符串的有效长度，不包含\0
void test5()
{
	char str[] = "hello\0world";

	printf("sizeof(str) = %u\n", sizeof(str));

	printf("strlen(str) = %u\n", strlen(str));
}

// 实现strlen函数
void test6()
{
	char str[] = "hello world";

	int i = 0;
	while (str[i] != 0)
	{
		i++;
	}

	printf("%d\n", i);
}

int main(int argc, char* argv[])
{
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	test6();

	system("pause");
	return 0;
}

#endif
