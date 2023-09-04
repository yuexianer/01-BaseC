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
	srand(time(NULL));

	int k = 1000000;
	int *p = (int *)malloc(sizeof(int)* k);

	if (!p)
	{
		printf("malloc error!\n");
		return -1;
	}

	// д�����ݵ�malloc�ռ�
	for (int i = 0; i < 10; i++)
	{
		p[i] = rand() % 100;
	}

	int *ptr = p;	// ��Ҫ�ı�ָ���ֵ���¸�ֵ������ָ�룬��������free�������

	for (int j = 0; j < 10; j++)
	{
		printf("p[%d] = %d\n", j, *ptr ++);
	}

	ptr = NULL;

	// �ͷ�������ڴ�
	free(p);
	p = NULL;

	system("pause");
	return 0;
}

#endif
