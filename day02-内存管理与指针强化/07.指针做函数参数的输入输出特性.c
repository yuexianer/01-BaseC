#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// 输入特性: 主调函数分配内存，被调函数使用
void func(char *p)
{
	strcpy(p, "I love you forever!");
}

void test01()
{
	// 在test01中分配了内存，在栈上
	char buff[1024] = { 0 };

	func(buff);

	printf("%s\n", buff);
}


void printString(char *str)
{
	printf("%s\n", str);
}

void test02()
{
	char *p = malloc(sizeof(char) * 64);
	memset(p, 0, sizeof(char)* 64);
	strcpy(p, "I love you forever~~~");
	printString(p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

// 输出特性: 在被调函数中分配内存，主调函数使用
void allocateSpace(char **pp)
{
	char *str = malloc(sizeof(char)* 64);
	memset(str, 0, sizeof(char) * 64);
	strcpy(str, "I love you whom do not love me!");

	*pp = str;
}

void test03()
{
	char *p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);
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
