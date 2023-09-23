#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// ��ȡ��Ч����
int getFileLines(FILE *fp)
{
	if (fp == NULL)
	{
		return -1;
	}

	char buf[1024];
	int lines = 0;
	while (fgets(buf, 1024, fp))
	{
		lines++;
		//printf("%s", buf);
	}

	// ���ļ��������
	fseek(fp, 0, SEEK_SET);

	return lines;
}

// ��ȡ���ݷ��뵽pArray��
void readFileData(FILE *fp, int len, char **pArray)
{
	if (fp == NULL)
	{
		return;
	}
	if (len <= 0)
	{
		return;
	}
	if (pArray == NULL)
	{
		return;
	}

	char buf[1024] = { 0 };

	for (int i = 0; i < len; i++)
	{
		fgets(buf, 1024, fp);
		pArray[i] = malloc(sizeof(char) * (strlen(buf) + 1));
		strcpy(pArray[i], buf);
		memset(buf, 0, sizeof buf);
	}

}

void showFileData(char **pArray, int len)
{
	if (pArray == NULL)
	{
		return;
	}

	if (len <= 0)
	{
		return;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%03d��: %s", i + 1, pArray[i]);
	}
}

// �ͷŶ��Ϸ�����ڴ�
void freeSpace(char ***p, int len)
{
	for (int i = 0; i < len; i++)
	{
		free((*p)[i]);
		(*p)[i] = NULL;
	}

	free(*p);
	*p = NULL;
}

int main(int argc, char* argv[])
{
	char *filename = "aaa.txt";
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		perror("fopen error: ");
		return;
	}

	// ͳ����Ч����
	int len = getFileLines(fp);
	
	printf("�ļ���Ч����: %d\n", len);

	char **pArray = malloc(sizeof(char *) * len);

	// ��ȡ�ļ��е����ݲ��ҷ��뵽pArray��
	readFileData(fp, len, pArray);

	// �������
	showFileData(pArray, len);

	// �ر��ļ�
	fclose(fp);

	freeSpace(&pArray, len);

	system("pause");
	return 0;
}

#endif
