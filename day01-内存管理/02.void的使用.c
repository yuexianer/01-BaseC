#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 修饰函数的返回值
void test01()
{
	printf("hello test01 .. \n");
}


// 修饰函数的参数
void test02(void)
{
	printf("hello test02 .. \n");
}

// void * 泛型指针，可以指向任何数据类型
void test03()
{
	printf("sizeof (void*) = %u\n", sizeof(void*));

	void *p = NULL;

	int *pInt = NULL;
	char *pChar = NULL;

	pChar = (char *)pInt;

	pChar = p;	// 万能指针，不能通过强制类型转换就成其它类型指针
}


int main(int argc, char* argv[])
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}

#endif
