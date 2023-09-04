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
	char s1[] = "I love you, you love me, mi xue bing cheng tian mi mi";
	char s2[100] = { 0 };
	char s3[100] = { 0 };

	char *p = strcpy(s2, s1);

	printf("s1 = %s\n", s1);
	printf("------------strcpy-----------\n");
	printf("p = %s\n", p);
	printf("s2 = %s\n", s2);


	p = strncpy(s3, s1, 10);
	printf("-------------strncpy-------------\n");
	printf("p = %s\n", p);
	printf("s3 = %s\n", s3);


	p = strncpy(s3, s1, 1000);
	printf("p = %s\n", p);
	printf("s3 = %s\n", s3);

	system("pause");
	return 0;
}

#endif
