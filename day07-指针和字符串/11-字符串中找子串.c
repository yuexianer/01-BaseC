#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// strstr��������
void test1()
{
	char *ret = strstr("hellollollo", "oll");

	printf("ret = %s\n", ret);
}

// ͳ���ַ������Ӵ����ֵĴ���
int str_times(const char *str, const char *substr)
{
	int count = 0;
	char *p = str;

	while (p = strstr(p, substr))
	{
		p += strlen(substr);
		count++;
	}

	return count;
}

int main(int argc, char* argv[])
{
	//test1();

	char *str = "hellollollollollollo";
	char *substr = "lol";

	int ret = str_times(str, substr);

	printf("���� %d ��\n", ret);

	system("pause");
	return 0;
}

#endif
