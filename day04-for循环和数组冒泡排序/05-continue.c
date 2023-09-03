#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1()
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("i = %d\n", i);
		printf("==========1==========\n");
		printf("==========2==========\n");
		printf("==========3==========\n");
		printf("==========4==========\n");
		printf("==========5==========\n");
	}
}

void test2()
{
	int num = 5;
	// while (num-- != 0)
	while (num--)
	{
		printf("num = %d\n", num);
		if (num == 3)
		{
			continue;
		}
		printf("=============1================\n");
		printf("=============2================\n");
		printf("=============3================\n");
		printf("=============4================\n");
		printf("=============5================\n");
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
