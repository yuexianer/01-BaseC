#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


struct Student
{
	char name[21];
	unsigned int age;
};

// �ṹ������������
void func1(struct Student stu)
{
	printf("%s   %u\n", stu.name, stu.age);
}

// �ṹ��ָ������������
void func2(struct Student *stu)
{
	printf("%s   %u\n", stu->name, stu->age);
}

// �ṹ������������ֵ
struct Student func3()
{
	struct Student stu = {"άҲ��", 16};
	return stu;
}

// �ṹ��ָ������������ֵ
struct Student *func4()
{
	struct Student *stu = (struct Student *)malloc(sizeof(struct Student));
	strcpy(stu->name, "�����߶�");
	stu->age = 660;
}

int main(int argc, char* argv[])
{
	struct Student std = { "��˹Τ����˹", 55 };
	func1(std);
	printf("======================================\n");
	func2(&std);
	printf("======================================\n");
	std = func3();
	printf("%s    %u\n", std.name, std.age);
	printf("======================================\n");
	struct Student *s = func4();
	printf("%s    %u\n", s->name, s->age);

	system("pause");
	return 0;
}

#endif
