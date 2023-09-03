#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int m = 100;	// 全局变量，程序运行结束对应空间消失

int *test_func2(int a, int b)
{
	int p = 12;	// 局部变量

	//return &p;
	return &m;
}

int main(int argc, char* argv[])
{
	int *ret = NULL;	// NULL == 0

	ret = test_func2(1, 2);

	printf("*ret = %d\n", *ret);

	system("pause");
	return 0;
}

#endif
