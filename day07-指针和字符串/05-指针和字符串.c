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
	char str1[] = "hello";	// {'h', 'e', 'l', 'l', 'o', '\0'}
	char m[] = "hello";

	char *str2 = "hello";	// "hello" 是一个字符串常量
	char *n = "hello";

	str1[0] = 'R';
	//str2[0] = 'R';

	printf("str1 = %p\n", str1);
	printf("m = %p\n", m);

	printf("str2 = %p\n", str2);
	printf("n = %p\n", n);

	system("pause");
	return 0;
}

#endif
