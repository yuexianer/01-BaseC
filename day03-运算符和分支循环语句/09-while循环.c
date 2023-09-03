#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int num = 1;
	while (num < 100)
	{
		if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
		{
			printf("ÇÃ×À×Ó\n");
		}
		else
		{
			printf("%d\n", num);
		}
		num ++;
	}

	system("pause");
	return 0;
}
#endif
