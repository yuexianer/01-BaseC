#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ʽ����ת��
void test1()
{
	int a = 321;

	char ch = a;

	printf("ch = %d\n", ch);
}

// ǿ������ת��
void test2()
{
	float price = 3.6;
	int weight = 4;

	// double sum = (int)price * weight;
	double sum = (int)(price * weight);

	printf("�۸�: %lf\n", sum);
}

int main(int argc, char *argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}
#endif
