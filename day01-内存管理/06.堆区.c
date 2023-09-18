#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int *getSpace()
{
	int *p = malloc(sizeof(int)* 5);
	if (p == NULL)
		return NULL;
	for (int i = 0; i < 5; i++)
		p[i] = i + 100;
	return p;
}

void test01()
{
	int *p = getSpace();
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
	putchar('\n');
	
	// 手动开辟手动释放
	free(p);
	p = NULL;
}

void allocateSpace(char *pp)
{
	char *tmp = malloc(100);
	memset(tmp, 0, 100);
	strcpy(tmp, "hello world");
	pp = tmp;
}

void test02()
{
	char *p = NULL;
	allocateSpace(p);
	printf("%s\n", p);
}

void allocateSpace1(char **pp)
{
	char *tmp = malloc(100);
	memset(tmp, 0, 100);
	strcpy(tmp, "hello world");
	*pp = tmp;
}

void test03()
{
	char *p = NULL;
	allocateSpace1(&p);
	printf("%s\n", p);
}

int main(int argc, char* argv[])
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}

#endif
