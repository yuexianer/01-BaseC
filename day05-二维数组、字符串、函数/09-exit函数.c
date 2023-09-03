#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int func(int a, char ch);

int main(int argc, char* argv[])
{
	int ret = func(20, 'a');

	printf("ret = %d\n", ret);

	system("pause");
	return 0;
}


int func(int a, char ch)
{
	printf("a = %d\n", a);

	printf("ch = %c\n", ch);

	// return 10;
	exit(10);
}

#endif
