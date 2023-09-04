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
	char s1[] = "www.iloveu.fit";

	char *p = strtok(s1, ".");

	while (p)
	{
		printf("%s\n", p);
		p = strtok(NULL, ".");
	}

	char s2[] = "https://www.iloveu.fit:8080";

	p = strtok(s2, ":/.");

	while (p)
	{
		printf("p = %s\n", p);
		p = strtok(NULL, ":/.");
	}

	system("pause");
	return 0;
}

#endif
