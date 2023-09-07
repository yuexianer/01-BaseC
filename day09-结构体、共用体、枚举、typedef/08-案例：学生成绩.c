#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define STD_CNT 3
#define COURSE_CNT 3

struct Student
{
	char *name;
	float *scores;
};

int main(int argc, char* argv[])
{
	struct Student *p = (struct Student *)malloc(sizeof(struct Student) * STD_CNT);

	for (int i = 0; i < STD_CNT; i++)
	{
		p[i].name = (char *)malloc(sizeof(char)* 21);
		p[i].scores = (float *)malloc(sizeof(float) * COURSE_CNT);
		
		printf("请输入学生 姓名   成绩: \n");
		scanf("%s%f%f%f", p[i].name, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);
	}

	// 冒泡排序
	for (int i = 0; i < STD_CNT - 1; i++)
	{
		for (int j = 0; j < STD_CNT - i - 1; j++)
		{
			float sum_j = 0, sum_j_1 = 0;

			for (int k = 0; k < COURSE_CNT; k++)
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

	for (int i = 0; i < STD_CNT; i++)
	{
		printf("姓名: %s\n", p[i].name);
		printf("成绩: %.1f    %.1f   %.1f\n", p[i].scores[0], p[i].scores[1], p[i].scores[2]);
	}

	for (int i = 0; i < STD_CNT; i++)
	{
		free(p[i].name);
		free(p[i].scores);
		p[i].name = NULL;
		p[i].scores = NULL;
	}

	free(p);
	p = NULL;

	system("pause");
	return 0;
}

#endif
