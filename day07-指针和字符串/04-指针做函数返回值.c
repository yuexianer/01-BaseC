#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int m = 100;	// ȫ�ֱ������������н�����Ӧ�ռ���ʧ

int *test_func2(int a, int b)
{
	int p = 12;	// �ֲ�����

	//return &p;
	return &m;
}

int main(int argc, char* argv[])
{
	int *ret = NULL;	// NULL == 0

	ret = test_func2(1, 2);

	printf("*ret = %d\n", *ret);

	system("pause");
	return 0;
}

#endif
