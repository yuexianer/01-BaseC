#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// 1. short ����
void test1()
{
	// 1.1 short ���͵����
	short s = 10;
	unsigned short us = 100;
	printf("short ���ͱ��� s = %hd\n", s);
	printf("unsigned short ���ͱ��� us = %hu\n", us);

	// 1.2 short ���͵��ڴ��С
	int size_short = sizeof(short);
	printf("short���͵��ڴ��СΪ %d\n", size_short);
	printf("unsigned short���͵��ڴ��СΪ %d\n", sizeof(unsigned short));

	// 1.3 short ���͵ķ�Χ
	printf("short����СֵΪ %hd, ���ֵΪ %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short����СֵΪ0, ���ֵΪ %hu\n", USHRT_MAX);

	// 1.4 short ���͵�����
	short shrt_number = 0;
	unsigned short ushrt_number = 0;
	printf("������һ��short���͵���: ");
	scanf("%hd", &shrt_number);
	printf("�������short���͵���Ϊ %hd\n", shrt_number);
	printf("������һ��unsigned short���͵���: ");
	scanf("%hu", &ushrt_number);
	printf("�������unsigned short���͵���Ϊ %hu\n", ushrt_number);
}

// 2. int ����
void test2()
{
	// 2.1 int ���͵����
	int i = 10;
	unsigned int ui = 100;
	printf("int ���ͱ��� i = %d\n", i);
	printf("unsigned int ���ͱ��� ui = %d\n", ui);

	// 2.2 int ���͵Ĵ�С
	printf("int ���͵��ڴ��СΪ %d\n", sizeof(int));
	printf("unsigned int ���͵��ڴ��СΪ %d\n", sizeof(unsigned int));

	// 2.3 int ���͵ķ�Χ
	printf("int ���͵���СֵΪ %d, ���ֵΪ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int ���͵���СֵΪ 0, ���ֵΪ %u\n", UINT_MAX);

	// 2.4 int ���͵�����
	int int_number = 0;
	unsigned int uint_number = 0;
	printf("������һ��int���͵���: ");
	scanf("%d", &int_number);
	printf("�������int���͵������� %d\n", int_number);
	printf("������һ��unsigned int���͵�����: ");
	scanf("%u", &uint_number);
	printf("�������unsigned int���͵������� %u\n", uint_number);
}

// 3. long ����
void test3()
{
	// 3.1 long ���͵����
	long l = 1000;
	unsigned long ul = 10000;
	printf("long ���ͱ��� l = %ld\n", l);
	printf("unsigned long ���ͱ��� ul = %lu\n", ul);

	// 3.2 long ���͵��ڴ��С
	printf("long ���͵��ڴ��СΪ %d\n", sizeof(long));
	printf("unsigned long ���͵��ڴ��СΪ %d\n", sizeof(unsigned long));

	// 3.3 long ���͵ķ�Χ
	printf("long ���͵���СֵΪ %ld, ���ֵΪ %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long ���͵���СֵΪ 0, ���ֵΪ %lu\n", ULONG_MAX);

	// 3.4 long ���͵�����
	long long_number = 0;
	unsigned long ulong_number = 0;
	printf("������һ��long ���͵���: ");
	scanf("%ld", &long_number);
	printf("�������long ���͵����� %ld\n", long_number);
	printf("������һ��unsigned long ���͵���: ");
	scanf("%lu", &ulong_number);
	printf("�������unsigned long ���͵����� %lu", ulong_number);

}

// 4. long long ����
void test4()
{
	// 4.1 long long ���͵����
	long long ll = 100;
	unsigned long long ull = 10010;
	printf("long long ���ͱ��� ll = %lld\n", ll);
	printf("unsigned long long ���ͱ��� ull = llu\n", ull);

	// 4.2 long long ���͵��ڴ��С
	printf("long long ���͵��ڴ��СΪ %d\n", sizeof(long long));
	printf("unsigned long long ���͵��ڴ��СΪ%d\n", sizeof(unsigned long long));

	// 4.3 long long ���͵ķ�Χ
	printf("long long ���͵���СֵΪ %lld, ���ֵΪ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long ���͵���СֵΪ0�� ���ֵΪ %llu\n", ULLONG_MAX);

	// 4.4 long long ���͵�����
	long long llong_number = 0;
	unsigned long long ullong_number = 0;
	printf("������һ��long long ���͵���: ");
	scanf("%lld", &llong_number);
	printf("�������long long ���͵����� %lld\n", llong_number);
	printf("������һ��unsigned long long ���͵���: ");
	scanf("%llu", &ullong_number);
	printf("�������unsigned long long ���͵����� %llu\n", ullong_number);

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
