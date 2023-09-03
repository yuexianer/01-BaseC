#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	int a = 10;
	int *p = &a;
	int **pp = &p;
	//int **pp = &(&a); ≤ª‘ –Ì
	int ***ppp = &pp;

	printf("***ppp = %d\n", ***ppp);
	printf("**pp = %d\n", **pp);
	printf("*p = %d\n", *p);
	printf("a = %d\n", a);

	system("pause");
	return 0;
}

#endif
