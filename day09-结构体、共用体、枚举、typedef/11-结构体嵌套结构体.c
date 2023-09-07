#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct stra {
	int a;
	float b;
	char c;
	double d;
};

struct strb
{
	struct stra ba;
	char *e;
	short f;
	short g;

};

struct strc
{
	int a;
	short b;
	struct 
	{
		int d;
		char ch;
	} c;
};

int main(int argc, char* argv[])
{
	printf("sizeof(stra) = %u\n", sizeof(struct stra));
	printf("sizeof(strb) = %u\n", sizeof(struct strb));

	printf("sizeof(strc) = %u\n", sizeof(struct strc));

	system("pause");
	return 0;
}

#endif
