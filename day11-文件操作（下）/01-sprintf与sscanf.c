#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 使用fprintf向文件中写数据
void write_file(char *filename)
{
	srand((unsigned int)time(NULL));

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < 10; i++)
	{
		fprintf(fp, "%d\n", rand() % 10);
	}

	fclose(fp);
}

// 使用fscanf从文件中读数据
void read_file1(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	int number = 0;

	// 读次数大于数字个数
	for (int i = 0; i < 12; i++)
	{
		fscanf(fp, "%d\n", &number);
		printf("%d\n", number);
		// 每次读完打印后重置为0
		number = 0;
	}

	fclose(fp);
}


// 使用fscanf循环读文件
void read_file2(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	int number = 0;
	while (1)
	{
		fscanf(fp, "%d\n", &number);
		printf("%d\n", number);

		if (feof(fp))
			break;
	}

	fclose(fp);
}

// fgets循环读文件
void read_file3(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	char buff[1024];
	while (1)
	{
		fgets(buff, 1024, fp);
		if (feof(fp))
			break;
		printf("%s", buff);
	}

	fclose(fp);
}

int main(int argc, char* argv[])
{
	char *filename = "test01-1.txt";

	write_file(filename);
	read_file1(filename);
	printf("==============================\n");
	read_file2(filename);
	printf("==============================\n");
	read_file3(filename);

	system("pause");
	return 0;
}

#endif
