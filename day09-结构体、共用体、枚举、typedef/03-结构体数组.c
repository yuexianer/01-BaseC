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
	char tel[16];
	float scores[3];
	char sex;
};

int main(int argc, char* argv[])
{
	// 结构体数组
	struct Student s[2];
	for (int i = 0; i < 2; i++)
	{
		printf("请输入 姓名  年龄  电话  成绩  性别: \n");
		scanf("%s%d%s%f%f%f %c", s[i].name, &s[i].age, s[i].tel, &s[i].scores[0], &s[i].scores[1], &s[i].scores[2], &s[i].sex);
		getchar();
	}

	for (int i = 0; i < 2; i++)
	{
		printf("姓名: %s\n", s[i].name);
		printf("年龄: %d\n", s[i].age);
		printf("电话: %s\n", s[i].tel);
		printf("成绩: %.1f  %.1f  %.1f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
		printf("性别: %s\n", s[i].sex == 'F' ? "女" : "男");
	}

	system("pause");
	return 0;
}

#endif
