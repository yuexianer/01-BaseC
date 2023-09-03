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
	int a[3][4][3] = {
		{
			{2, 3, 4},
			{ 2, 54, 4 },
			{ 2, 3, 43 },
			{ 2, 83, 4 }
		},
		{
			{ 2, 34, 4 },
			{ 72, 3, 4 },
			{ 22, 33, 4 },
			{ 27, 37, 4 }
		},
		{
			{ 62, 3, 4 },
			{ 2, 39, 4 },
			{ 52, 3, 40 },
			{ 2, 3, 49 }
		}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("%d ", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	
	system("pause");
	return 0;
}

#endif
