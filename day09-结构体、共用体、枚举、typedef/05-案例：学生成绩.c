#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define N 3

struct Student
{
	char *name;
	float scores[3];
};

int main(int argc, char* argv[])
{
	struct Student s[N];

	for (int i = 0; i < N; i++)
	{
		s[i].name = (char *)malloc(sizeof(char) * 21);
		printf("������ѧ���ĳɼ�   ����   �ɼ�: \n");
		scanf("%s%f%f%f", s[i].name, &s[i].scores[0], &s[i].scores[1], &s[i].scores[2]);
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			float sum_j = s[j].scores[0] + s[j].scores[1] + s[j].scores[2];
			float sum_j_1 = s[j + 1].scores[0] + s[j + 1].scores[1] + s[j + 1].scores[2];
			if (sum_j > sum_j_1)
			{
				//// �ṹ�彻��  �������г�Ա�б������
				//// ��������
				//char tmp[21] = { 0 };
				//strcpy(tmp, s[j].name);
				//strcpy(s[j].name, s[j + 1].name);
				//strcpy(s[j + 1].name, tmp);
				//
				//// �����ɼ�
				//for (int k = 0; k < 3; k++)
				//{
				//	float tmp = s[j].scores[k];
				//	s[j].scores[k] = s[j + 1].scores[k];
				//	s[j + 1].scores[k] = tmp;
				//}


				// �ṹ���Ա��������
				struct Student tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;

			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("����: %s\n", s[i].name);
		printf("�ɼ�: %.1f   %.1f   %.1f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
	}

	for (int i = 0; i < N; i++)
	{
		free(s[i].name);
		s[i].name = NULL;
	}

	system("pause");
	return 0;
}

#endif
