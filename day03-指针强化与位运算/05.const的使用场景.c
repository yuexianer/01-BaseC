#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct Person
{
	char name[64];
	unsigned int age;
	unsigned int id;
	double score;
};

// ��struct Person p ��Ϊ struct Person *p ��ʡ��Դ
// const ʹ�������βΣ���ֹ�����
void show(const struct Person *p)
{
	//p->age = 20;
	printf("name: %s, age: %u, id: %u, score:%.2lf\n", p->name, p->age, p->id, p->score);
}

int main(int argc, char* argv[])
{
	struct Person p = {"�Ͻ�˹����", 50, 1, 520.1314};
	show(&p);

	system("pause");
	return 0;
}

#endif
