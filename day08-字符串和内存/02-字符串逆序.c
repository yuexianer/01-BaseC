#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// �ַ�������
void str_inverse(char *str)
{
	char *start = str;						// ��¼��Ԫ�ص�ַ
	char *end = str + strlen(str) - 1;		// ��¼���һ��Ԫ�ص�ַ

	while (start < end)						// ��Ԫ�ص�ַ�Ƿ�С�����һ��Ԫ�ص�ַ
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;							// ��Ԫ�ض�Ӧָ�����
		end--;								// βԪ�ض�Ӧָ��ǰ��
	}
}

int main(int argc, char* argv[])
{
	char str[] = "ni hao sao ya ha ha ha ha ha";

	str_inverse(str);

	printf("%s\n", str);

	system("pause");
	return 0;
}

#endif
