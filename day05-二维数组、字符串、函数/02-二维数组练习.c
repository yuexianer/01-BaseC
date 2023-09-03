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

	// 获取学生三门功课的成绩
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", scores[i][j]);
		}
		putchar('\n');
	}

	// 求一个学生的总成绩
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += scores[i][j];
		}
		printf("第%d个学生的总成绩为: %d\n", i + 1, sum);
	}

	// 求一门功课的总成绩
	for (int i = 0; i < col; i++)
	{
		int sum = 0;
		for (int j = 0; j < row; j++)
		{
			sum += scores[j][i];
		}
		printf("第%d门功课的总成绩为: %d\n", i + 1, sum);
	}

	system("pause");
	return 0;
}

#endif
