#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 向文件中写入数据
void test1(char *filename)
{
	FILE *fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}
	
	fputc('a', fp);
	fputc('f', fp);
	fputc(-1, fp);
	fputc('s', fp);
	fputc('v', fp);
	fputc('g', fp);
	fputc('h', fp);

	fclose(fp);
}

// 读文件，使用EOF判断文件末尾，只能判断文本文件
void test2(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		char ch = fgetc(fp);
		if (ch == EOF) return;
		printf("%d \n", ch);
	}

	fclose(fp);
}

// 使用feof判断文件结束
void test3(char *filename)
{
	FILE *fp = fopen(filename, "r");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		char ch = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c\n", ch);
	}

	fclose(fp);
}

int main(int argc, char* argv[])
{
	char *filename = "test05-1.txt";

	//test1(filename);
	//test2(filename);
	test3(filename);

	system("pause");
	return 0;
}

#endif
