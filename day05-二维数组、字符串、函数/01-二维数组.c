#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


void test1()
{
	int arr[3][4] = {
						{ 2, 4, 5, 6 },
						{ 2, 4, 5, 3},
						{2, 4, 5, 7}
					};

	for (int i = 0; i < 3; i++)	// ��
	{
		for (int j = 0; j < 4; j++)	// ��
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("����Ĵ�СΪ: %u\n", sizeof(arr));
	printf("�����еĴ�С: %u\n", sizeof(arr[0]));
	printf("����һ��Ԫ�صĴ�С: %u\n", sizeof(arr[0][0]));

	printf("����=�ܴ�С/һ�д�С: %d\n", sizeof(arr) / sizeof(arr[0]));
	printf("����=�д�С/һ��Ԫ�ش�С: %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	printf("arr = %p\n", arr);
	printf("&arr[0][0] = %p\n", &arr[0][0]);
	printf("arr[0] = %p\n", arr[0]);
}

// ��ά����ĳ�ʼ��
void test2()
{
	int arr[][3] = { 2, 3, 4, 2, 6, 8, 3, 5, 3, 6 };

	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}

}

int main(int argc, char* argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}

#endif
