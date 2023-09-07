#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

union vars
{
	double a;
	char b;
	int c;
	float d;
};

int main(int argc, char* argv[])
{
	union vars var;
	var.a = 10;
	printf("a = %lf\n", var.a);

	printf("======================\n");
	var.b = 100;
	printf("a = %lf\n", var.a);
	printf("b = %d\n", var.b);

	printf("======================\n");
	var.c = 1000;
	printf("a = %lf\n", var.a);
	printf("b = %d\n", var.b);
	printf("c = %d\n", var.c);

	printf("=======================\n");
	var.d = 1314.520;
	printf("a = %lf\n", var.a);
	printf("b = %d\n", var.b);
	printf("c = %d\n", var.c);
	printf("d = %f\n", var.d);

	system("pause");
	return 0;
}

#endif
