#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����forѭ��
void test1()
{
	int i = 0;	// ѭ������
	int sum = 0;

	for (i = 0; i <= 100; i++)
	{
		sum += i;	// sum = sum + i;
	}

	printf("sum = %d\n", sum);
}

// ʡ�Ա��ʽ1
void test2()
{
	int i = 1;
	int sum = 0;

	for (; i <= 100; i++)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);
}

// ʡ�Ա��ʽ3
void test3()
{
	int i = 1;
	int sum = 0;

	for (; i <= 100;)
	{
		sum += i;
		i++;
	}

	printf("sum = %d\n", sum);
}

// ʡ�Ա��ʽ123
void test4()
{
	int i = 0;
	
	// for(;1;)  // ��ѭ��
	for (;;)
	{
		printf("i = %d\n", i);
		i++;
	}
}

// ���ʽ�ж��
void test5()
{
	int i = 0;
	int a = 0;

	for (i = 1, a = 2; i < 5, a < 20; i++, a += 2)
	{
		printf("i = %d\n", i);
		printf("a = %d\n", a);
	}
}

int main(int argc, char *argv[])
{
	// test1();
	// test2();
	// test3();
	// test4();
	test5();
	system("pause");
	return 0;
}
#endif
