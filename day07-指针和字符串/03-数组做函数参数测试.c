#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


void test_func(int arr[])
{
	printf("size 2 = %u\n", sizeof(arr));

	printf("%d \n", arr[0]);
}

int main(int argc, char* argv[])
{
	int arr[] = { 2, 3, 4, 5 };

	printf("size 1 = %u\n", sizeof(arr));

	test_func(arr);

	system("pause");
	return 0;
}

#endif
