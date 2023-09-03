#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test()
{
	int a = 34;
	int b = 0;

	printf("!a = %d\n", !a);
	printf("!b = %d\n", !b);

	printf("a && !b = %d\n", a && !b);
	printf("!a || b = %d\n", !a || b);

}

int main(int argc, char *argv[])
{
	test();
	system("pause");
	return 0;
}
#endif
