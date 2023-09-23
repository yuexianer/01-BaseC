#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// 获取有效行数
int getFileLines(FILE *fp)
{
	if (fp == NULL)
	{
		return -1;
	}

	char buf[1024];
	int lines = 0;
	while (fgets(buf, 1024, fp))
	{
		lines++;
		//printf("%s", buf);
	}

	// 将文件光标置首
	fseek(fp, 0, SEEK_SET);

	return lines;
}

// 读取数据放入到pArray中
void readFileData(FILE *fp, int len, char **pArray)
{
	if (fp == NULL)
	{
		return;
	}
	if (len <= 0)
	{
		return;
	}
	if (pArray == NULL)
	{
		return;
	}

	char buf[1024] = { 0 };

	for (int i = 0; i < len; i++)
	{
		fgets(buf, 1024, fp);
		pArray[i] = malloc(sizeof(char) * (strlen(buf) + 1));
		strcpy(pArray[i], buf);
		memset(buf, 0, sizeof buf);
	}

}

void showFileData(char **pArray, int len)
{
	if (pArray == NULL)
	{
		return;
	}

	if (len <= 0)
	{
		return;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%03d行: %s", i + 1, pArray[i]);
	}
}

// 释放堆上分配的内存
void freeSpace(char ***p, int len)
{
	for (int i = 0; i < len; i++)
	{
		free((*p)[i]);
		(*p)[i] = NULL;
	}

	free(*p);
	*p = NULL;
}

int main(int argc, char* argv[])
{
	char *filename = "aaa.txt";
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		perror("fopen error: ");
		return;
	}

	// 统计有效行数
	int len = getFileLines(fp);
	
	printf("文件有效行数: %d\n", len);

	char **pArray = malloc(sizeof(char *) * len);

	// 读取文件中的数据并且放入到pArray中
	readFileData(fp, len, pArray);

	// 输出数据
	showFileData(pArray, len);

	// 关闭文件
	fclose(fp);

	freeSpace(&pArray, len);

	system("pause");
	return 0;
}

#endif
