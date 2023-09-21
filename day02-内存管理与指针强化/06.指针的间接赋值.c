#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 间接赋值的三大条件
// 一个普通变量和指针变量或者一个实参一个形参
// 建立关系
// * 操作内存
void changeValue(int *a)
{
	*a = 1000;
}


int main(int argc, char* argv[])
{
	int a = 10;
	int *p = NULL;

	p = &a;

	*p = 100;

	printf("%d\n", a);

	int a2 = 10;
	changeValue(&a2);

	printf("%d\n", a2);

	system("pause");
	return 0;
}

#endif
