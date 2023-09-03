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

	printf("请输入学生的成绩: ");
	scanf("%d", &score);

	if (score >= 90 && score <= 100)
	{
		printf("优秀\n");
	}
	else if (score < 90 && score >= 70)
	{
		printf("良好\n");
	}
	else if (score < 70 && score >= 60)
	{
		printf("及格\n");
	}
	else
	{
		printf("不及格\n");
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
