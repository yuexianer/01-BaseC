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
	int scores[][3] = { 56, 78, 92, 45, 67, 93, 29, 83, 88, 93, 56, 89, 72, 83, 81 };

	int row = sizeof(scores) / sizeof(scores[0]);
	int col = sizeof(scores[0]) / sizeof(scores[0][0]);

	// ��ȡѧ�����Ź��εĳɼ�
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", scores[i][j]);
		}
		putchar('\n');
	}

	// ��һ��ѧ�����ܳɼ�
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += scores[i][j];
		}
		printf("��%d��ѧ�����ܳɼ�Ϊ: %d\n", i + 1, sum);
	}

	// ��һ�Ź��ε��ܳɼ�
	for (int i = 0; i < col; i++)
	{
		int sum = 0;
		for (int j = 0; j < row; j++)
		{
			sum += scores[j][i];
		}
		printf("��%d�Ź��ε��ܳɼ�Ϊ: %d\n", i + 1, sum);
	}

	system("pause");
	return 0;
}

#endif
