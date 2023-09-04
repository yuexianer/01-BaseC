#include <stdio.h>

static int a = 5201314;

void test(void)
{
	static int b = 0;

	printf("b = %d\n", b ++);
}