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
	char *filename = "test06-1.txt";
	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	char buf[4096] = { 0 };

	while (1)
	{
		fgets(buf, 4096, stdin);
		if (strcmp(buf, ":wq\n") == 0)
		{
			break;
		}
		fputs(buf, fp);
	}

	fclose(fp);

	system("pause");
	return 0;
}

#endif
