#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// 变量的修改方式
void test01()
{
	// 直接修改
	int a = 10;
	a = 20;

	// 间接修改
	int *p = &a;
	*p = 30;
}


struct Person
{
	char a;	// 0 - 3
	int b;	// 4 - 7
	char c;	// 8 - 11
	int d;	// 12 - 15
};

void test02()
{
	struct Person p = { 'a', 10, 'b', 20 };
	printf("p.d = %d\n", p.d);

	// 修改d属性
	p.d = 30;
	printf("p.d = %d\n", p.d);

	char *pp = &p;
	*((int*)(pp + 12)) = 66;
	printf("*((int*)(pp + 12)) = %d\n", *((int*)(pp + 12)));
	printf("p.d = %d\n", p.d);


	*((int*)pp + 3) = 88;
	printf("*((int*)pp + 3) = %d\n", *((int*)pp + 3));
	printf("p.d = %d\n", p.d);

}


int main(int argc, char* argv[])
{
	test01();
	test02();

	system("pause");
	return 0;
}

#endif
