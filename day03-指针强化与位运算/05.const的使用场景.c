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

// 将struct Person p 改为 struct Person *p 节省资源
// const 使用修饰形参，防止误操作
void show(const struct Person *p)
{
	//p->age = 20;
	printf("name: %s, age: %u, id: %u, score:%.2lf\n", p->name, p->age, p->id, p->score);
}

int main(int argc, char* argv[])
{
	struct Person p = {"迪杰斯特拉", 50, 1, 520.1314};
	show(&p);

	system("pause");
	return 0;
}

#endif
