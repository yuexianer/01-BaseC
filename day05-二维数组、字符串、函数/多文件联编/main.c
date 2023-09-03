#if 1

#define _CRT_SECURE_NO_WARNINGS

#include "head.h"

int main(int argc, char* argv[])
{
	int a = 32;
	int b = 43;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));

	system("pause");
	return 0;
}

#endif
