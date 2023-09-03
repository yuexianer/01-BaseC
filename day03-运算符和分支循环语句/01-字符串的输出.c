#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1()
{
	char ch = 'a';

	printf("ch = %c\n", ch);

	char str[] = "Hello World";
	char str1[2] = { 'a', 'b' };

	printf("str = %s\n", str);
	// str1没有以'\0'结尾，字符串输出会内存溢出
	printf("str1 = %s\n", str1); 
}

void test2()
{
	char str[] = "Hello Wolrd";
	printf("|%-15s|\n", str);
}

void test3()
{
	putchar(97); // 'a' -- 97
	putchar('a');
	putchar('b');
	putchar('c');
	putchar('d');
}

int main(int argc, char *argv[])
{
	// test1();
	// test2();
	test3();
	system("pause");
	return 0;
}
#endif
