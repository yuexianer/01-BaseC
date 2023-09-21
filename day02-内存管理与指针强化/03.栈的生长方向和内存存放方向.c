#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 栈的生长方向
void test01()
{
	int a = 10;		// 栈底	高地址
	int b = 20;
	int c = 30;
	int d = 40;		// 栈顶	低地址

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d);
}


// 内存存放方向
void test02()
{
	int a = 0x11223344;

	unsigned char *p = &a;

	printf("%x\n", *p);		// 低位字节数据	低地址
	printf("%x\n", *(p + 1));	// 高位字节数据	高地址
}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	system("pause");
	return 0;
}

#endif
