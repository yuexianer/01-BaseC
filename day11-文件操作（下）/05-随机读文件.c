#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


typedef struct Student
{
	char name[12];
	unsigned int age;
	unsigned int sno;
} Student;


void test1()
{
	Student s_list[4] = {
		"张三", 16, 26123,
		"李四", 20, 26433,
		"王麻子", 26, 24733,
		"老六", 18, 62356
	};

	Student stu;

	FILE *fp = fopen("test05-1.txt", "wb+");	
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	int ret = fwrite(s_list, 1, sizeof(s_list), fp);	// 以二进制的方式写入
	printf("ret = %d\n", ret);

	fseek(fp, sizeof(stu) * 2, SEEK_SET);
	ret = ftell(fp);	// 获取读写指针到文件起始位置的偏移量
	printf("ret = %d\n", ret);

	ret = fread(&stu, 1, sizeof(stu), fp);
	printf("ret = %d\n", ret);
	printf("姓名: %s, 年龄： %u, 编号: %u\n", stu.name, stu.age, stu.sno);

	fseek(fp, 0, SEEK_END);		// 将读写指针放在文件结尾
	ret = ftell(fp);
	printf("文件大小为: %d\n", ret);

	rewind(fp);		// 回卷读写指针
	ret = fread(&stu, 1, sizeof(stu), fp);
	printf("ret = %d\n", ret);
	printf("姓名: %s, 年龄： %u, 编号: %u\n", stu.name, stu.age, stu.sno);

	fclose(fp);
}

void test2()
{
	FILE *fp = fopen("test05-2.txt", "w+");

	int ret = fputs("11111", fp);
	printf("ret1 = %d\n", ret);

	ret = fputs("22222", fp);
	printf("ret2 = %d\n", ret);

	ret = fputs("33333", fp);
	printf("ret3 = %d\n", ret);

	char buff[1024] = {0};

	/*char *ptr = fgets(buff, sizeof(buff), fp);
	if (feof(fp))
	{
		printf("error\n");
	}
	if (ptr == NULL)
		printf("ptr = NULL\n", ptr);
	else
		printf("ptr = %s\n", ptr);
	memset(buff, 0, sizeof(buff));*/
	fseek(fp, -10, SEEK_CUR);
	
	char *ptr = fgets(buff, sizeof(buff), fp);
	if (ptr == NULL)
		printf("ptr = NULL\n", ptr);
	else
		printf("ptr = %s\n", ptr);
	memset(buff, 0, sizeof(buff));


	rewind(fp);
	ptr = fgets(buff, sizeof(buff), fp);
	if (ptr == NULL)
		printf("ptr = NULL\n", ptr);
	else
		printf("ptr = %s\n", ptr);

	fclose(fp);

}

void test3()
{
	FILE *fp = fopen("test05-3.txt", "r+");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	char buff[6] = { 0 };
	char *ptr = fgets(buff, 6, fp);

	printf("ptr = %s, buff = %s\n", ptr, buff);

	fseek(fp, 0, SEEK_CUR);
	int ret = fputs("12345", fp);
	printf("ret = %d\n", ret);

	fclose(fp);

}

int main(int argc, char* argv[])
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}

#endif
