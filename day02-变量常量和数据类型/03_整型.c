#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// 1. short 类型
void test1()
{
	// 1.1 short 类型的输出
	short s = 10;
	unsigned short us = 100;
	printf("short 类型变量 s = %hd\n", s);
	printf("unsigned short 类型变量 us = %hu\n", us);

	// 1.2 short 类型的内存大小
	int size_short = sizeof(short);
	printf("short类型的内存大小为 %d\n", size_short);
	printf("unsigned short类型的内存大小为 %d\n", sizeof(unsigned short));

	// 1.3 short 类型的范围
	printf("short的最小值为 %hd, 最大值为 %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short的最小值为0, 最大值为 %hu\n", USHRT_MAX);

	// 1.4 short 类型的输入
	short shrt_number = 0;
	unsigned short ushrt_number = 0;
	printf("请输入一个short类型的数: ");
	scanf("%hd", &shrt_number);
	printf("您输入的short类型的数为 %hd\n", shrt_number);
	printf("请输入一个unsigned short类型的数: ");
	scanf("%hu", &ushrt_number);
	printf("您输入的unsigned short类型的数为 %hu\n", ushrt_number);
}

// 2. int 类型
void test2()
{
	// 2.1 int 类型的输出
	int i = 10;
	unsigned int ui = 100;
	printf("int 类型变量 i = %d\n", i);
	printf("unsigned int 类型变量 ui = %d\n", ui);

	// 2.2 int 类型的大小
	printf("int 类型的内存大小为 %d\n", sizeof(int));
	printf("unsigned int 类型的内存大小为 %d\n", sizeof(unsigned int));

	// 2.3 int 类型的范围
	printf("int 类型的最小值为 %d, 最大值为 %d\n", INT_MIN, INT_MAX);
	printf("unsigned int 类型的最小值为 0, 最大值为 %u\n", UINT_MAX);

	// 2.4 int 类型的输入
	int int_number = 0;
	unsigned int uint_number = 0;
	printf("请输入一个int类型的数: ");
	scanf("%d", &int_number);
	printf("您输入的int类型的数字是 %d\n", int_number);
	printf("请输入一个unsigned int类型的数字: ");
	scanf("%u", &uint_number);
	printf("您输入的unsigned int类型的数字是 %u\n", uint_number);
}

// 3. long 类型
void test3()
{
	// 3.1 long 类型的输出
	long l = 1000;
	unsigned long ul = 10000;
	printf("long 类型变量 l = %ld\n", l);
	printf("unsigned long 类型变量 ul = %lu\n", ul);

	// 3.2 long 类型的内存大小
	printf("long 类型的内存大小为 %d\n", sizeof(long));
	printf("unsigned long 类型的内存大小为 %d\n", sizeof(unsigned long));

	// 3.3 long 类型的范围
	printf("long 类型的最小值为 %ld, 最大值为 %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long 类型的最小值为 0, 最大值为 %lu\n", ULONG_MAX);

	// 3.4 long 类型的输入
	long long_number = 0;
	unsigned long ulong_number = 0;
	printf("请输入一个long 类型的数: ");
	scanf("%ld", &long_number);
	printf("您输入的long 类型的数是 %ld\n", long_number);
	printf("请输入一个unsigned long 类型的数: ");
	scanf("%lu", &ulong_number);
	printf("您输入的unsigned long 类型的数是 %lu", ulong_number);

}

// 4. long long 类型
void test4()
{
	// 4.1 long long 类型的输出
	long long ll = 100;
	unsigned long long ull = 10010;
	printf("long long 类型变量 ll = %lld\n", ll);
	printf("unsigned long long 类型变量 ull = llu\n", ull);

	// 4.2 long long 类型的内存大小
	printf("long long 类型的内存大小为 %d\n", sizeof(long long));
	printf("unsigned long long 类型的内存大小为%d\n", sizeof(unsigned long long));

	// 4.3 long long 类型的范围
	printf("long long 类型的最小值为 %lld, 最大值为 %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long 类型的最小值为0， 最大值为 %llu\n", ULLONG_MAX);

	// 4.4 long long 类型的输入
	long long llong_number = 0;
	unsigned long long ullong_number = 0;
	printf("请输入一个long long 类型的数: ");
	scanf("%lld", &llong_number);
	printf("您输入的long long 类型的数是 %lld\n", llong_number);
	printf("请输入一个unsigned long long 类型的数: ");
	scanf("%llu", &ullong_number);
	printf("您输入的unsigned long long 类型的数是 %llu\n", ullong_number);

}

int main(int argc, char *argv[])
{
	//test1();
	//test2();
	//test3();
	test4();
	system("pause");
	return 0;
}
#endif
