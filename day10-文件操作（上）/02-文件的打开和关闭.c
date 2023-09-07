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

	FILE *fp = NULL;
	
	fp = fopen("test01-1.txt", "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return -1;
	}

	fclose(fp);
	printf("=========finish==========\n");

	system("pause");
	return 0;
}

#endif
