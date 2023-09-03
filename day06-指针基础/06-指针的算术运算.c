#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// 指针在数组中+- 整数
void test1()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 8, 7, 9 };
	//int *p = a; a == &a[0];

	int *p = &a[5];

	printf("p - 2 = %p\n", p - 2);

	printf("&a[3] = %p\n", &a[3]);
}

// &数组名+1
void test2()
{
	short a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	printf("a = %p\n", a);
	printf("&a[0] = %p\n", &a[0]);

	printf("a + 1 = %p\n", a + 1);

	printf("&a     = %p\n", &a);
	printf("&a + 1 = %p\n", &a + 1);
}

// 指针加减指针
void test3()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = a;

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");

	printf("p - a = %d\n", p - a);
}

int main(int argc, char* argv[])
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}

#endif
