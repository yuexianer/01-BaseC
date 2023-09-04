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
	char *s1 = "hello";
	char *s2 = "helloworld";

	int ret = strcmp(s1, s2);

	printf("============strcmp===============\n");
	printf("ret = %d\n", ret);

	ret = strncmp(s1, s2, 5);

	printf("=============strncmp=============\n");
	printf("ret = %d\n", ret);

	system("pause");
	return 0;
}

#endif
