#if 0

//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1()
{
	int a;
	scanf("%d", &a);

	if (a > 0)
	{
		printf("a > 0\n");
	}
	else
	{
		printf("a <= 0\n");
	}
}

void test2()
{
	int score;

	printf("������ѧ���ĳɼ�: ");
	scanf("%d", &score);

	if (score >= 90 && score <= 100)
	{
		printf("����\n");
	}
	else if (score < 90 && score >= 70)
	{
		printf("����\n");
	}
	else if (score < 70 && score >= 60)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
}

int main(int argc, char *argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}
#endif
