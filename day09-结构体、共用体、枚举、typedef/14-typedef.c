#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

typedef unsigned long long ull;

typedef struct Student
{
	char *name;
	unsigned int age;
} Student;

int main(int argc, char* argv[])
{
	ull number = 1000000;
	printf("%llu\n", number);

	Student s = { "ÀîËÄ", 56 };
	printf("%s : %d\n", s.name, s.age);

	system("pause");
	return 0;
}

#endif
