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
	srand((unsigned int)time(NULL));  // 随机数种子

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < N; i++)
	{
		fprintf(fp, "%d\n", rand() % 100); // 将生成的随机数写入文件
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
		fscanf(fp, "%d\n", &p[i ++]);  // 从文件中读取一个随机数，存入数组p
		if (feof(fp))	// 先存储后判断，防止最后一个元素丢失
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

	bubble_sort(p, i);  // 对读取到的乱序数组进行排序

	fp = fopen(filename, "w");	// 用w的方式打开文件，清空原来的内容
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int j = 0; j < i; j++)
	{
		printf("%d ", p[j]);
		fprintf(fp, "%d\n", p[j]);    // 写排序好的数组到文件
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
