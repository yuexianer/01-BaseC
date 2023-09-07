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
	srand((unsigned int)time(NULL));

	char *filename = "test04-1.txt";
	FILE *fp = fopen(filename, "r");

	// ¶ÁÊ§°Ü¾ÍÐ´
	if (fp == NULL)
	{
		perror("fopen error");
		fp = fopen(filename, "w");

		// Ð´Ê§°Ü¾Í¹Ø±Õ
		if (fp == NULL)
		{
			perror("fopen error");
			return -1;
		}

		int ret = 0;
		for (int i = 0; i < 10; i++)
		{
			ret = fputc(rand() % 26 + 'a', fp);
			if (ret == -1)
			{
				perror("fputc error");
				if (fp) fclose(fp);
				return -1;
			}
		}
		
		fclose(fp);

		fp = fopen(filename, "r");
		if (fp == NULL)
		{
			perror("fopen error");
			return -1;
		}
	}

	int ret = 0;
	for (int i = 0; i < 11; i++)
	{
		ret = fgetc(fp);
		printf("%d\n", ret);
	}

	fclose(fp);

	system("pause");
	return 0;
}

#endif
