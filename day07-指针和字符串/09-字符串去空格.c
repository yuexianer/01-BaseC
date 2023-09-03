#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// src: ÓÐ¿Õ¸ñ×Ö·û´®	dst: ÎÞ¿Õ¸ñ×Ö·û´®
// Ö¸Õë°æ
void str_no_space1(char const *src, char *dst)
{
	while (*src)
	{
		if (*src != ' ')
			*(dst++) = *src;
		src++;
	}
	*dst = '\0';
}

void str_no_space2(char const *src, char *dst)
{
	int i = 0;	// ±éÀú×Ö·û´®src
	int j = 0;	// ¼ÇÂ¼dstµÄ´æ´¢Î»ÖÃ

	while (src[i])
	{
		if (src[i] != ' ')
			dst[j++] = src[i];
		i++;
	}
	dst[j] = '\0';
}

int main(int argc, char* argv[])
{
	char str[] = "wei zhong hua zhi jue qi er du shu!";
	char dst[100];

	str_no_space1(str, dst);

	printf("dst = %s\n", dst);

	str_no_space2(str, dst);

	printf("dst = %s\n", dst);

	system("pause");
	return 0;
}

#endif
