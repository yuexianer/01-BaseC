#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// �ṹ����Ҫ�������ͽ����ڴ���룬�������Ǹ�Ϊ׼
struct Student1
{
	char name[20];
	unsigned int age;
	char sex;
	float scores[3];
	char tel[15];
};

struct Student2
{
	char name[20];
	unsigned int age;
	char sex;
	char tel[15];
	float scores[3];
};

int main(int argc, char* argv[])
{
	printf("sizeof(struct Student1) = %u\n", sizeof(struct Student1));
	printf("sizeof(struct Student2) = %u\n", sizeof(struct Student2));

	system("pause");
	return 0;
}

#endif
