#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// ��������: �������������ڴ棬��������ʹ��
void func(char *p)
{
	strcpy(p, "I love you forever!");
}

void test01()
{
	// ��test01�з������ڴ棬��ջ��
	char buff[1024] = { 0 };

	func(buff);

	printf("%s\n", buff);
}


void printString(char *str)
{
	printf("%s\n", str);
}

void test02()
{
	char *p = malloc(sizeof(char) * 64);
	memset(p, 0, sizeof(char)* 64);
	strcpy(p, "I love you forever~~~");
	printString(p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

// �������: �ڱ��������з����ڴ棬��������ʹ��
void allocateSpace(char **pp)
{
	char *str = malloc(sizeof(char)* 64);
	memset(str, 0, sizeof(char) * 64);
	strcpy(str, "I love you whom do not love me!");

	*pp = str;
}

void test03()
{
	char *p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);
}

int main(int argc, char* argv[])
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}

#endif
