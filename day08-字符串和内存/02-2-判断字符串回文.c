#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// �ж��ַ����Ƿ��ǻ���
int str_palindrome(char *str)
{
	char *start = str;
	char *end = str + strlen(str) - 1;

	while (start < end)
	{
		if (*start != *end)
			return 0;
		start++;
		end--;
	}

	return 1;
}

int main(int argc, char* argv[])
{
	char str[] = "lolmlol";

	int ret = str_palindrome(str);

	if (ret)
		printf("�ǻ���\n");
	else
		printf("���ǻ���\n");

	system("pause");
	return 0;
}

#endif
