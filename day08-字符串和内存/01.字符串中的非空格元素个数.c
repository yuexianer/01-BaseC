#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int no_space_str(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str != ' ')
			count++;
		str++;
	}
	return count;
}


int main(int argc, char* argv[])
{
	char str[] = "ni hao ya xiao peng you";

	int ret = no_space_str(str);

	printf("ret = %d\n", ret);

	system("pause");
	return 0;
}

#endif
