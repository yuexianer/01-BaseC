#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	FILE *fp = fopen("test07-1.txt", "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == ':')
		{
			break;
		}
		fputc(ch, fp);
		fflush(fp);	 // 手动刷新文件缓冲区到物理磁盘
	}

	// 关闭文件时，会自动刷新缓冲区
	fclose(fp);
	system("pause");
	return 0;
}

#endif
