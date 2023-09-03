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
	char str[100];
	// scanf("%s", str);
	
	scanf("%[^\n]s", str);

	printf("%s\n", str);

	system("pause");
	return 0;
}

#endif
