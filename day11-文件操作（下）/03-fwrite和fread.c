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


// 将数据写入文件中
void write_file(char *filename)
{
	// 以写的方式打开文件判断是否打开成功
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

	// 生成学生的基本信息
	for (int i = 0; i < N; i++)
	{

		// 在堆上开辟学生的基本信息存储空间
		std_list[i].name = (char *)malloc(sizeof(char)* 15);
		std_list[i].tel = (char *)malloc(sizeof(char)* 15);
		std_list[i].age = rand() % 30 + 20;
		
		memset(std_list[i].name, 0, 15);
		memset(std_list[i].tel, 0, 15);
		
		// 初始化信息
		int name_len = rand() % 6 + 3;
		for (int i = 0; i < name_len; i++)
		{
			buff[i] = rand() % 26 + 'a';
		}
		strcpy(std_list[i].name, buff);
		sprintf(std_list[i].tel, "%d", rand() % 100000 + 100000000);
		
		// 将结构体的信息写入文件中
		int ret = 0;

		// 学生姓名
		ret = fwrite(std_list[i].name, 1, 15, fp);
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

		// 学生年龄
		ret = fwrite(&std_list[i].age, 1, sizeof(unsigned int), fp); 
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

		// 学生电话
		ret = fwrite(std_list[i].tel, 1, 15, fp); 
		if (ret == 0)
		{
			perror("fwrite error");
			return;
		}

	}


	fclose(fp);

}

// 对堆上的元素进行冒泡排序
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

// 从文件中使用fread读取数据
void read_file(char *filename)
{
	// 打开文件
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	// 在堆上开辟学生数组
	Student *stu = (Student *)malloc(sizeof(Student)* MAX_SIZE);
	
	int i = 0;

	// 读取数据
	while (1)
	{
		// 开辟姓名和电话的存储空间
		stu[i].name = (char *)malloc(sizeof(char)* 15);
		stu[i].tel = (char *)malloc(sizeof(char)* 15);
		fread(stu[i].name, 1, 15, fp);
		
		// 判断是否文件末尾
		if (feof(fp))
		{
			break;
		}
		fread(&stu[i].age, 1, sizeof(unsigned int), fp);
		fread(stu[i].tel, 1, 15, fp);
		printf("学生姓名: %s   年龄: %u    电话: %s\n", stu[i].name, stu[i].age, stu[i].tel);
		i++;
	}

	bubble_sort(stu, i);

	printf("按照年龄从小到大排序后:\n");

	for (int j = 0; j < i; j++)
	{
		printf("学生姓名: %s   年龄: %u    电话: %s\n", stu[j].name, stu[j].age, stu[j].tel);
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
