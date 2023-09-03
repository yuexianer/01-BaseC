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
	int a = 365;
	void *p;	// 万能指针、泛型指针

	p = &a;

	printf("%d\n", *(int *)p);

	char ch = 'a';

	p = &ch;

	printf("%c\n", *(char *)p);

	system("pause");
	return 0;
}

#endif
