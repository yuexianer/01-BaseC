#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// ��������Ԫ�ص�4�ַ���
void test1()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int n = sizeof(a) / sizeof(a[0]);
	int *p = a;

	printf("sizeof(a) = %u\n", sizeof(a));
	printf("sizeof(p) = %u\n", sizeof(p));

	for (int i = 0; i < n; i++)
	{
		// printf("%d ", a[i]);
		// printf("%d ", *(a + i));
		// printf("%d ", p[i]);
		printf("%d ", *(p + i));
	}

	putchar('\n');
}

// ʹ��ָ��++��������Ԫ��
void test2()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr;
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("first p = %p\n", p);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p);
		p++; // p = p + 1; һ�μӹ�һ��int��С�� һ��Ԫ��
	}
	putchar('\n');

	printf("last p = %p\n", p);
}

void test3()
{
	srand(time(NULL));
	int arr[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	int *p = arr;

	for (int i = 0; i < n; i++)
	{
		*(p + i) = rand() % 100;	// *(p + i) == arr[i]
	}								// p ָ��������׵�ַ

	for (int i = 0; i < n; i++)
	{
		printf("%d ", *p);
		p++;		
	}								// p ָ��ָ��һ����Ч���ڴ�����pΪ Ұָ��
	printf("\n");

}

int main(int argc, char* argv[])
{
	// test1();
	// test2();
	test3();

	system("pause");
	return 0;
}

#endif
