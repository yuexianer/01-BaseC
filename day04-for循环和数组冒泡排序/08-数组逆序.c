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
	int arr[] = { 12, 234, 34, 23, 4, 324, 5, 34, 42, 54, 32 };
	int len = sizeof(arr) / sizeof(arr[0]); // ������ĳ���

	int i = 0;	// ������Ԫ�ص��±�
	int j = len - 1; // �������һ��Ԫ�ص��±�
	int temp = 0;

	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	// �����������±�
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

#endif
