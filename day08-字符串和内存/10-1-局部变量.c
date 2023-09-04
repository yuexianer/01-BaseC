#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void test(void);	// 全局函数申明

int m = 4456;

int main(int argc, char* argv[])
{
	int i = 1212;
	for (int i = 0; i < 10; i++)
	{
		printf("i = %d\n", i);
		test();
	}

	printf("i = %d\n", i);

	system("pause");
	return 0;
}

#endif
