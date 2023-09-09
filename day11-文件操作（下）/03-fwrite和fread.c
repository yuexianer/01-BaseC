#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define MAX_SIZE 100
#define STUDENT_CNT 15
#define N STUDENT_CNT 


typedef struct Student
{
	char *name;
	unsigned int age;
	char *tel;
} Student;


// ������д���ļ���
void write_file(char *filename)
{
	// ��д�ķ�ʽ���ļ��ж��Ƿ�򿪳ɹ�
	FILE *fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	srand((unsigned int)time(NULL));

	Student *std_list;
	std_list = (Student *)malloc(sizeof(Student)* MAX_SIZE);
	char buff[15] = {0};

	// ����ѧ���Ļ�����Ϣ
	for (int i = 0; i < N; i++)
	{

		// �ڶ��Ͽ���ѧ���Ļ�����Ϣ�洢�ռ�
		std_list[i].name = (char *)malloc(sizeof(char)* 15);
		std_list[i].tel = (char *)malloc(sizeof(char)* 15);
		std_list[i].age = rand() % 30 + 20;
		
		memset(std_list[i].name, 0, 15);
		memset(std_list[i].tel, 0, 15);
		
		// ��ʼ����Ϣ
		int name_len = rand() % 6 + 3;
		for (int i = 0; i < name_len; i++)
		{
			buff[i] = rand() % 26 + 'a';
		}
		strcpy(std_list[i].name, buff);
		sprintf(std_list[i].tel, "%d", rand() % 100000 + 100000000);
		
		// ���ṹ�����Ϣд���ļ���
		int ret = 0;

		// ѧ������
		ret = fwrite(std_list[i].name, 1, 15, fp);
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

		// ѧ������
		ret = fwrite(&std_list[i].age, 1, sizeof(unsigned int), fp); 
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

		// ѧ���绰
		ret = fwrite(std_list[i].tel, 1, 15, fp); 
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

	}


	fclose(fp);

}

// �Զ��ϵ�Ԫ�ؽ���ð������
void bubble_sort(Student *p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (p[j].age > p[j + 1].age)
			{
				Student s = p[j];
				p[j] = p[j + 1];
				p[j + 1] = s;
			}
		}
	}
}

// ���ļ���ʹ��fread��ȡ����
void read_file(char *filename)
{
	// ���ļ�
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	// �ڶ��Ͽ���ѧ������
	Student *stu = (Student *)malloc(sizeof(Student)* MAX_SIZE);
	
	int i = 0;

	// ��ȡ����
	while (1)
	{
		// ���������͵绰�Ĵ洢�ռ�
		stu[i].name = (char *)malloc(sizeof(char)* 15);
		stu[i].tel = (char *)malloc(sizeof(char)* 15);
		fread(stu[i].name, 1, 15, fp);
		
		// �ж��Ƿ��ļ�ĩβ
		if (feof(fp))
		{
			break;
		}
		fread(&stu[i].age, 1, sizeof(unsigned int), fp);
		fread(stu[i].tel, 1, 15, fp);
		printf("ѧ������: %s   ����: %u    �绰: %s\n", stu[i].name, stu[i].age, stu[i].tel);
		i++;
	}

	bubble_sort(stu, i);

	printf("���������С���������:\n");

	for (int j = 0; j < i; j++)
	{
		printf("ѧ������: %s   ����: %u    �绰: %s\n", stu[j].name, stu[j].age, stu[j].tel);
	}

	fclose(fp);
}

int main(int argc, char* argv[])
{
	char *filename = "test03-1.txt";
	write_file(filename);

	read_file(filename);

	system("pause");
	return 0;
}

#endif
