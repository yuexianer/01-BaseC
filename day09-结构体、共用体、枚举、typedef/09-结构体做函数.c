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

// 结构体做函数参数
void func1(struct Student stu)
{
	printf("%s   %u\n", stu.name, stu.age);
}

// 结构体指针做函数参数
void func2(struct Student *stu)
{
	printf("%s   %u\n", stu->name, stu->age);
}

// 结构体做函数返回值
struct Student func3()
{
	struct Student stu = {"维也纳", 16};
	return stu;
}

// 结构体指针做函数返回值
struct Student *func4()
{
	struct Student *stu = (struct Student *)malloc(sizeof(struct Student));
	strcpy(stu->name, "玻利瓦尔");
	stu->age = 660;
}

int main(int argc, char* argv[])
{
	struct Student std = { "拉斯韦尔拉斯", 55 };
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
