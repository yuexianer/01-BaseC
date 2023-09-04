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
	char s1[100] = "hello ";
	char s2[] = "world";

	char *p = strcat(s1, s2);
	
	printf("==================strcat======================\n");
	printf("p = %s\n", p);
	printf("s1 = %s\n", s1);

	char s3[100] = "nihao! ";
	p = strncat(s3, s2, 2);

	printf("==================strncat======================\n");
	printf("p = %s\n", p);
	printf("s3 = %s\n", s3);

	system("pause");
	return 0;
}

#endif
