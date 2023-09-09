#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define N 15

void write_file(char *filename)
{
	srand((unsigned int)time(NULL));  // ���������

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < N; i++)
	{
		fprintf(fp, "%d\n", rand() % 100); // �����ɵ������д���ļ�
	}

	fclose(fp);
}

void bubble_sort(int a[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}


void read_file(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	int *p = (int *)malloc(sizeof(int)* 100);
	int i = 0;

	while (1)
	{
		fscanf(fp, "%d\n", &p[i ++]);  // ���ļ��ж�ȡһ�����������������p
		if (feof(fp))	// �ȴ洢���жϣ���ֹ���һ��Ԫ�ض�ʧ
		{
			break;
		}
	}


	for (int j = 0; j < i; j++)
	{
		printf("%d ", p[j]);
	}
	putchar('\n');

	fclose(fp);

	bubble_sort(p, i);  // �Զ�ȡ�������������������

	fp = fopen(filename, "w");	// ��w�ķ�ʽ���ļ������ԭ��������
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int j = 0; j < i; j++)
	{
		printf("%d ", p[j]);
		fprintf(fp, "%d\n", p[j]);    // д����õ����鵽�ļ�
	}
	putchar('\n');

	fclose(fp);
}


int main(int argc, char* argv[])
{
	char *filename = "test02-1.txt";

	//write_file(filename);
	read_file(filename);

	system("pause");
	return 0;
}

#endif
