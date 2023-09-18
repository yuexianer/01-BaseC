#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// static 静态变量
// 特点：在运行前分配内存，程序运行结束，声明周期结束，在本文件内部都可以使用静态变量
// 全局作用域a
static int a = 10;

void test01()
{
	// 局部作用域b
	static int b = 20;
}

int main(int argc, char* argv[])
{
	// 告诉编译器 下面代码中的g_a不要报错，是外部链接属性，在其它文件中
	extern int g_a;

	printf("%d\n", g_a);

	system("pause");
	return 0;
}

#endif
