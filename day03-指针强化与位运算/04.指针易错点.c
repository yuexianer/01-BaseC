#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	char *p = malloc(sizeof(char)* 64);
	char *pp = p;	// ͨ��������ʱָ������ڴ棬��ֹ����

	for (int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c ", *pp);
		//p++;	// ����ָ��λ���ͷų���
		pp++;	
	}
	putchar('\n');
	pp = NULL;

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	system("pause");
	return 0;
}

#endif
