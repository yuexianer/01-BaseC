#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1()
{
	printf("===============1================\n");
	printf("===============2================\n");
	goto LABLE;
	printf("===============3================\n");
	printf("===============4================\n");
	printf("===============5================\n");
	printf("===============6================\n");
	printf("===============7================\n");
LABLE:
	printf("===============8================\n");
	printf("===============9================\n");
	printf("===============10================\n");
}


void test2()
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 5) goto LABLE1;
		printf("i = %d\n", i);
	}
	for (j = 0; j < 20; j++)
	{
LABLE1:
		printf("j = %d\n", j);
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
