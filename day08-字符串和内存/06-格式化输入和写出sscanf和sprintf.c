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
	char s[100] = { 0 };

	int a, b, c;

	sprintf(s, "%d + %d = %d", 10, 20, 30);
	puts(s);

	sscanf(s, "%d + %d = %d", &a, &b, &c);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	system("pause");
	return 0;
}

#endif
