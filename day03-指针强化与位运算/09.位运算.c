#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 按位取反 ~
void test01()
{
	int num = 2;
	printf("~num = %d\n", ~num);
}

// 按位与 &
void test02()
{
	int num = 520;
	if ((num & 1) == 1)
	{
		printf("num 是奇数\n", num);
	}
	else
	{
		printf("num 是偶数\n", num);
	}
}

// 按位或
void test03()
{
	int num1 = 10;
	int num2 = 40;

	printf("num1 | num2 = %d\n", num1 | num2);
}

// 按位异或 ^
void test04()
{
	int num1 = 67;
	int num2 = 45;

	//int tmp = num1;
	//num1 = num2;
	//num2 = tmp;

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;

	//num1 = num1 + num2;
	//num2 = num1 - num2;
	//num1 = num1 - num2;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}

int main(int argc, char* argv[])
{
	test01();
	test02();
	test03();
	test04();

	system("pause");
	return 0;
}

#endif
