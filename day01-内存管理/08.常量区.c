#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// const���εı���
// ȫ�ֱ���
const int a = 10; // ������������޸��﷨ͨ��������ʧ�ܣ���Ϊ���ܵ��������ı���

void test01()
{
	int *p = &a;
	*p = 100;
	printf("%d\n", a);
}


void test02()
{
	const int b = 10; // ����ջ�ϣ�ͨ������޸��ǿ��Գɹ���

	int *p = &b;
	*p = 20;
	printf("%d\n", b);

	// ��C�����У�const���εľֲ�������Ϊα�����������Գ�ʼ������
}

void test03()
{
	char *p1 = "hello world";
	char *p2 = "hello world";
	char *p3 = "hello world";
	printf("%p\n", &"hello world");
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", p3);
}

void test04()
{
	char *str = "hello world";
	str[0] = 'x';
}

int main(int argc, char* argv[])
{
	//test01();
	//test02();
	test03();
	//test04();

	system("pause");
	return 0;
}

#endif
