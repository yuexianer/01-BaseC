#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void allocateSpace(int **p)
{
	int *tmp = malloc(sizeof(int)* 10);
	for (int i = 0; i < 10; i++)
	{
		tmp[i] = 100 + i;
	}
	*p = tmp;
}

void printArray(int **pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", (*pArray)[i]);
	}
	putchar('\n');
}

void freeSpace(int **p)
{
	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

int main(int argc, char* argv[])
{
	int *p = NULL;
	allocateSpace(&p);

	printArray(&p, 10);

	freeSpace(&p);

	if (p == NULL)
	{
		printf("¿ÕÖ¸Õë\n");
	}
	else
	{
		printf("Ò°Ö¸Õë\n");
	}

	system("pause");
	return 0;
}

#endif
