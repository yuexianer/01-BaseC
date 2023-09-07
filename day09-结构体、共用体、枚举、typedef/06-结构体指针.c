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
	unsigned int age;
};

int main(int argc, char* argv[])
{
	struct StudentInfo stu;
	struct StudentInfo *si = &stu;

	si->name = (char *)malloc(sizeof(char) * 21);

	strcpy(si->name, "¸¥ÂåÒÁµÂ");
	si->age = 20;

	printf("%s    %d\n", si->name, si->age);

	system("pause");
	return 0;
}

#endif
