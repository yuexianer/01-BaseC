#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	int arr[] = { 32, 4, 23, 54, 43, 65, 7, 5, 8, 5, 43, 9 };
	int len = sizeof(arr) / sizeof(arr[0]); // ����Ԫ�صĸ���
	int temp = 0;
	
	// ��ӡð������ǰ��Ԫ��
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	// ð������
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// ���ð��������Ԫ��
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	
	system("pause");
	return 0;
}

#endif
