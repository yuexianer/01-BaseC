#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

char *mystrch1(const char *str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (ch == str[i])
		{
			return &str[i];
		}
		i++;
	}
	return NULL;
}

char *mystrch2(const char *str, char ch)
{
	while (*str)
	{
		if (*str == ch)
		{
			return str;
		}
		str++;
	}
	return NULL;
}

int main(int argc, char* argv[])
{
	char str[] = "da jia hao cai shi zhen de hao, guang zhou hao di!";
	char ch1 = ' ';
	char *ret = NULL;

	ret = mystrch1(str, ch1);

	printf("ret = %s\n", ret);

	char ch2 = 'z';

	ret = mystrch2(str, ch2);

	printf("ret = %s\n", ret);
	system("pause");
	return 0;
}

#endif
