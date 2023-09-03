#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int mystrcmp1(const char *str1, const char *str2)
{
	int i = 0;

	while (str1[i] == str2[i])	// *(str1 + i) == *(str2 + i)
	{
		if (str1[i] == '\0')
			return 0;
		i++;
	}

	return str1[i] > str2[i] ? 1 : -1;
}

int mystrcmp2(const char *str1, const char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	
	return *str1 > *str2 ? 1 : -1;
}

int main(int argc, char* argv[])
{
	char *s1 = "hello";
	char *s2 = "hello";

	int ret1 = mystrcmp1(s1, s2);

	if (ret1 == 0)
		printf("s1 == s2\n");
	else if (ret1 == -1)
		printf("s1 < s2\n");
	else if (ret1 == 1)
		printf("s1 > s2\n");
	else
		printf("“Ï≥£\n");
	

	int ret2 = mystrcmp2(s1, s2);

	if (ret2 == 0)
		printf("s1 == s2\n");
	else if (ret2 == -1)
		printf("s1 < s2\n");
	else if (ret2 == 1)
		printf("s1 > s2\n");
	else
		printf("“Ï≥£\n");

	system("pause");
	return 0;
}

#endif
