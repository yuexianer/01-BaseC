#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// ���κ����ķ���ֵ
void test01()
{
	printf("hello test01 .. \n");
}


// ���κ����Ĳ���
void test02(void)
{
	printf("hello test02 .. \n");
}

// void * ����ָ�룬����ָ���κ���������
void test03()
{
	printf("sizeof (void*) = %u\n", sizeof(void*));

	void *p = NULL;

	int *pInt = NULL;
	char *pChar = NULL;

	pChar = (char *)pInt;

	pChar = p;	// ����ָ�룬����ͨ��ǿ������ת���ͳ���������ָ��
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
