#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


/*

// ����ṹ���ʽ
struct �ṹ������
{
	�ṹ���Ա�б�
};

// ����ṹ�����
struct �ṹ������ �ṹ�������
�ṹ�������.�ṹ���Ա�б� = ֵ
������ַ������ͣ���Ҫʹ��strcpy
*/

struct Student
{
	char name[100];
	unsigned int age;
	char tel[16];
	float scores[3];
	char sex;
	char addr[100];
};

void show(struct Student s)
{
	printf("name: %s\n", s.name);
	printf("age: %d\n", s.age);
	printf("tel: %s\n", s.tel);
	printf("score: %.1f    %.1f    %.1f\n", s.scores[0], s.scores[1], s.scores[2]);
	printf("sex: %s\n", s.sex == 'M' ? "��" : "Ů");
	printf("address: %s\n", s.addr);
}

int main(int argc, char* argv[])
{
	
	struct Student std1 = {"��˹��", 200, "12345678912", 89.2, 43.9, 56, 'F', "�޺��"};
	show(std1);

	printf("======================================================\n");

	struct Student std2 = { .name = "����˹", .age = 500, .tel = "1245151544", 
		.scores = {78, 23, 89}, .sex = 'F', .addr = "Ư����" };
	show(std2);

	printf("======================================================\n");

	struct Student std3;
	strcpy(std3.name, "�����");
	strcpy(std3.addr, "�ݲ˹�");
	strcpy(std3.tel, "1215451545");
	std3.age = 678;
	std3.scores[0] = 86;
	std3.scores[1] = 98;
	std3.scores[2] = 89;
	std3.sex = 'M';
	show(std3);

	system("pause");
	return 0;
}

#endif
