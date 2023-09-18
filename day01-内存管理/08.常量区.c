#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// const修饰的变量
// 全局变量
const int a = 10; // 常量区，间接修改语法通过，运行失败，因为会受到常量区的保护

void test01()
{
	int *p = &a;
	*p = 100;
	printf("%d\n", a);
}


void test02()
{
	const int b = 10; // 放在栈上，通过间接修改是可以成功的

	int *p = &b;
	*p = 20;
	printf("%d\n", b);

	// 在C语言中，const修饰的局部变量称为伪常量，不可以初始化数组
}

void test03()
{
	char *p1 = "hello world";
	char *p2 = "hello world";
	char *p3 = "hello world";
	printf("%p\n", &"hello world");
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", p3);
}

void test04()
{
	char *str = "hello world";
	str[0] = 'x';
}

int main(int argc, char* argv[])
{
	//test01();
	//test02();
	test03();
	//test04();

	system("pause");
	return 0;
}

#endif
