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

	int memsize[N] = { 0 }; // ��¼ÿ��ָ�뿪�ٿռ�Ĵ�С

	for (int i = 0; i < N; i++)
		memsize[i] = rand() % 10 + 1;	// ÿ���ռ��СΪ����� 1~10��Ԫ��

	// �ȿ������ռ�
	int **pptr = (int **)malloc(sizeof(int *) * 5);
	int **pp = pptr;
	// �����ڲ�ռ�
	for (int i = 0; i < N; i++)
		pptr[i] = (int *)malloc(sizeof(int)* memsize[i]);

	// ���ڴ�ռ���������ֵ
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < memsize[i]; j++)
			pptr[i][j] = rand() % 100 + 1;
	}

	// ����ڴ�ռ��ֵ
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < memsize[i]; j++)
		{
				printf("%d ", *(*(pp + i) + j));
		}
		putchar('\n');
	}

	pp = NULL;
	// �ͷſռ�Ҫ���ͷ��ڲ�ռ����ͷ����ռ�
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
