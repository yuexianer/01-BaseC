#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <stddef.h>

// ָ��Ĳ�������ָ��+1֮����Ծ���ֽ���
void test01()
{
	char *p = NULL;
	printf("%d\n", p);
	printf("%d\n", p + 1);

	double *p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);
}

// �����õ�ʱ�򣬽�����ֽ�����
void test02()
{
	char buff[1024] = { 0 };
	
	int a = 1314;

	memcpy(buff + 1, &a, sizeof(int));

	char *p = buff;
	printf("%d\n", *(int *)(p + 1));
}

// �ṹ�岽��
struct Person
{
	char *name;
	unsigned int age;
	char tel[15];
	double high;
	double weight;
	char addr[1024];
};

#define getOffset(s,m) ((unsigned int)&(((s *)0)->m))

void test03()
{
	struct Person p = {"��˹��", 250, "00100010010", 1314.520, 88888, "����ɽ"};

	printf("%.lf\n", *(double *)((char *)&p + 32));
	printf("%.lf\n", *(double *)((char *)&p + offsetof(struct Person, weight)));
	printf("%.lf\n", *(double *)((char *)&p + getOffset(struct Person, weight)));
}

int main(int argc, char* argv[])
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}

#endif
