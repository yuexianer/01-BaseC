#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct Teacher
{
	char *name;
	unsigned int age;
};

int main(int argc, char* argv[])
{
	struct Teacher *p = (struct Teacher *)malloc(sizeof(struct Teacher));

	p->name = (char *)malloc(sizeof(char)* 21);

	strcpy(p->name, "¼Ö¿ËË¹");
	p->age = 60;

	printf("%s    %d\n", p->name, p->age);

	if (p->name != NULL)
	{
		free(p->name);
		p->name = NULL;
	}

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;
}

#endif
