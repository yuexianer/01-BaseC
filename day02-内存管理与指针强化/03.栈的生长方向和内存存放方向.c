#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// ջ����������
void test01()
{
	int a = 10;		// ջ��	�ߵ�ַ
	int b = 20;
	int c = 30;
	int d = 40;		// ջ��	�͵�ַ

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d);
}


// �ڴ��ŷ���
void test02()
{
	int a = 0x11223344;

	unsigned char *p = &a;

	printf("%x\n", *p);		// ��λ�ֽ�����	�͵�ַ
	printf("%x\n", *(p + 1));	// ��λ�ֽ�����	�ߵ�ַ
}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	system("pause");
	return 0;
}

#endif
