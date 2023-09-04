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

	int inumber = atoi("12");
	float fnumber = atof("520.1314f");
	long lnumber = atol("1314L");

	printf("inumber = %d\n", inumber);
	printf("lnumber = %ld\n", lnumber);
	printf("fnumber = %f\n", fnumber);

	system("pause");
	return 0;
}

#endif
