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
	// �ṹ������
	struct Student s[2];
	for (int i = 0; i < 2; i++)
	{
		printf("������ ����  ����  �绰  �ɼ�  �Ա�: \n");
		scanf("%s%d%s%f%f%f %c", s[i].name, &s[i].age, s[i].tel, &s[i].scores[0], &s[i].scores[1], &s[i].scores[2], &s[i].sex);
		getchar();
	}

	for (int i = 0; i < 2; i++)
	{
		printf("����: %s\n", s[i].name);
		printf("����: %d\n", s[i].age);
		printf("�绰: %s\n", s[i].tel);
		printf("�ɼ�: %.1f  %.1f  %.1f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
		printf("�Ա�: %s\n", s[i].sex == 'F' ? "Ů" : "��");
	}

	system("pause");
	return 0;
}

#endif
