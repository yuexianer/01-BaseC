#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int swap1(int, int);
int swap2(int*, int*);

int main(int argc, char* argv[])
{
	int m = 10;
	int n = 20;

	printf("--before-- m = %d, n = %d\n", m, n);
	// 函数调用
	swap1(m, n);	// m、n 实参

	printf("--after-- m = %d, n = %d\n", m, n);

	printf("--before-- m = %d, n = %d\n", m, n);
	
	swap2(&m, &n);

	printf("--after-- m = %d, n = %d\n", m, n);

	system("pause");
	return 0;
}

int swap1(int a, int b)	// a、b 形参
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;

	return 0;
}

int swap2(int *a, int *b)	// 形参a、b 需传地址值
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

	return 0;
}

#endif
