#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct StudentInfo
{
	char *name;
	int age;
};

int main(int argc, char* argv[])
{
	struct StudentInfo si;
	si.name = (char *)malloc(sizeof(char)* 21);

	strcpy(si.name, "уехЩ");
	si.age = 18;

	printf("%s  %d\n", si.name, si.age);
	
	free(si.name);

	system("pause");
	return 0;
}

#endif
