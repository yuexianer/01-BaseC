#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 数组版本
void mystrcpy1(const char *src, char *dst)
{
	int i = 0;
	while (src[i] != '\0')	// src[i] = *(src + i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

// 指针版本
void mystrcpy2(const char *src, char *dst)
{
	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
}

int main(int argc, char* argv[])
{
	char *s1 = "hello world hello world";
	char s2[100];

	mystrcpy1(s1, s2);

	printf("s2 = %s\n", s2);

	char s3[100];

	mystrcpy2(s1, s3);

	printf("s3 = %s\n", s3);

	system("pause");
	return 0;
}

#endif
