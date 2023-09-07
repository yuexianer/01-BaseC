#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define STD_CNT 10
#define COURSE_CNT 4

struct Student
{
	char *name;
	float *scores;
};

// 冒泡排序
void bubble_sort(struct Student *p, unsigned int std_cnt, unsigned int course_cnt)
{
	for (int i = 0; i < std_cnt - 1; i++)
	{
		for (int j = 0; j < std_cnt - 1 - i; j++)
		{
			float sum_j = 0, sum_j_1 = 0;
			for (int k = 0; k < course_cnt; k++)
			{
				sum_j += p[j].scores[k];
				sum_j_1 += p[j + 1].scores[k];
			}
			if (sum_j > sum_j_1)
			{
				struct Student tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}


// 输入学生的成绩姓名
void input_info(struct Student **p, unsigned int std_cnt, unsigned int course_cnt)
{
	*p = (struct Student *)malloc(sizeof(struct Student) * std_cnt);
	printf("请输入学生的姓名    成绩 * %d\n", course_cnt);
	for (int i = 0; i < std_cnt; i++)
	{
		(*p)[i].name = (char *)malloc(sizeof(char)* 21);
		(*p)[i].scores = (float *)malloc(sizeof(float) * course_cnt);
		scanf("%s", (*p)[i].name);
		for (int j = 0; j < course_cnt; j++)
			scanf("%f", &(*p)[i].scores[j]);
	}
}

// 显示信息
void show_info(struct Student *p, unsigned int std_cnt, unsigned int course_cnt)
{
	printf("=============================================\n");
	for (int i = 0; i < std_cnt; i++)
	{
		printf("%s   %.1f   %.1f   %.1f\n", p[i].name, p[i].scores[0], p[i].scores[1], p[i].scores[2]);
	}
}

// 释放空间
void free_student(struct Student *p, unsigned int std_cnt, unsigned int course_cnt)
{
	for (int i = 0; i < std_cnt; i++)
	{
		free(p[i].name);
		free(p[i].scores);
		p[i].name = NULL;
		p[i].scores = NULL;
	}
	free(p);
	p = NULL;
}

int main(int argc, char* argv[])
{
	struct Student *p = NULL;
	input_info(&p, 3, 3);
	bubble_sort(p, 3, 3);
	show_info(p, 3, 3);
	free_student(p, 3, 3);

	system("pause");
	return 0;
}

#endif
