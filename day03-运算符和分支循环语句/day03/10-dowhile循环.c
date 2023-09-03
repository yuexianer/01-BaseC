#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// while循环的基础用法
void test1()
{
	int a = 0;
	do
	{
		a++;
		printf("a = %d\n", a);
	} while (a < 10);

}

// 求水仙花数
void test2()
{
	int num = 100;
	int ge, shi, bai;

	do
	{
		ge = num % 10;
		shi = num / 10 % 10;
		bai = num / 100;
		if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
		{
			printf("%d\n", num);
		}
		num++;
	} while (num < 1000);
}

int main(int argc, char *argv[])
{
	// test1();
	test2();

	system("pause");
	return 0;
}
#endif
