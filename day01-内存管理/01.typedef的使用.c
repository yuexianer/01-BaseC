#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// �����
typedef struct Person
{
	char *name;
	unsigned int age;
} myPerson;

void test01()
{
	struct Person p1 = {"��������", 100};
	printf("p1.name = %s, p1.age = %u\n", p1.name, p1.age);

	myPerson p2 = {"�Ͻ�˹����", 80};
	printf("p2.name = %s, p2.age = %u\n", p2.name, p2.age);
}


// ������������
void test02()
{
	typedef char* PCHAR;
	PCHAR pc = "����������";
	char* name, ch;
	name = "����ԭ�ϲ�";
	ch = 'c';
	printf("pc = %s, name = %s, ch = %c\n", pc, name, ch);
}


// �����ֲ��

typedef long long MLL;

void test03()
{
	MLL a = 10;
	MLL b = 40;
	printf("a = %lld, b = %lld\n", a, b);
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
