#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// ��������ʵ��
int myStrlen(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

// ����ָ�� ++ ʵ��
int myStrlen2(char str[])
{
	char *p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;	// ��������Ԫ�صĸ���
}


int main(int argc, char* argv[])
{
	char a[] = "hello world";
	int ret = myStrlen(a);
	
	printf("ret = %d\n", ret);

	int ret2 = myStrlen2(a);
	printf("ret2 = %d\n", ret2);

	system("pause");
	return 0;
}

#endif
