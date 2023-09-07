#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// fputc函数的使用
void test1()
{
	char *filename = "test03-1.txt";

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	int ret = fputc('A', fp);

	printf("ret = %d\n", ret);
	if (ret == -1)
	{
		perror("fputc error");
		return -1;
	}

	fclose(fp);
}


// 在文件中写入二十六个小写字母
void test2()
{
	char *filename = "test03-2.txt";

	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	int ret = 0;

	for (int i = 0; i < 26; i++)
	{
		ret = fputc('a' + i, fp);

		if (ret == -1)
		{
			perror("fputc error");
			return -1;
		}

	}

	fclose(fp);

}

int main(int argc, char* argv[])
{
	//test1();
	test2();
	printf("=======finish=========\n");

	system("pause");
	return 0;
}

#endif
