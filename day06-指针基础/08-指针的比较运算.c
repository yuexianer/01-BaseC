#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	int a[] = { 1, 3, 2, 4, 5, 7, 3, 4, 3, 4, 5 };

	int *p = &a[0];

	if (p > a)
		printf("成立\n");
	else if (p < a)
		printf("不成立\n");
	else
		printf("==\n");

	system("pause");
	return 0;
}

#endif
