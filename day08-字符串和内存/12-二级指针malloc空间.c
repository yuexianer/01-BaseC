#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define N 5


int main(int argc, char* argv[])
{
	srand(time(NULL));

	int memsize[N] = { 0 }; // 记录每个指针开辟空间的大小

	for (int i = 0; i < N; i++)
		memsize[i] = rand() % 10 + 1;	// 每个空间大小为随机数 1~10个元素

	// 先开辟外层空间
	int **pptr = (int **)malloc(sizeof(int *) * 5);
	int **pp = pptr;
	// 开辟内层空间
	for (int i = 0; i < N; i++)
		pptr[i] = (int *)malloc(sizeof(int)* memsize[i]);

	// 对内存空间进行随机赋值
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < memsize[i]; j++)
			pptr[i][j] = rand() % 100 + 1;
	}

	// 输出内存空间的值
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < memsize[i]; j++)
		{
				printf("%d ", *(*(pp + i) + j));
		}
		putchar('\n');
	}

	pp = NULL;
	// 释放空间要先释放内层空间再释放外层空间
	for (int i = 0; i < N; i++)
	{
		free(pptr[i]);
		pptr = NULL;
	}
	free(pptr);

	system("pause");
	return 0;
}

#endif
