#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// sizeof��һ�������������Ǻ���
void test01()
{
	printf("size of int = %u\n", sizeof(int));

	char p = '0';
	printf("size of p = %u\n", sizeof p);
}


// sizeof�ķ���ֵ������һ���޷�������
void test02()
{
	if (sizeof(int)-20 > 0)
	{
		printf("����0\n");
	}
	else
	{
		printf("С��0\n");
	}
}

// sizeof��������ͳ������ĳ���
void test03()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("size of arr = %u\n", sizeof arr);
	printf("length of arr = %u\n", sizeof arr / sizeof arr[0]);
}


int main(int argc, char* argv[])
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}

#endif
