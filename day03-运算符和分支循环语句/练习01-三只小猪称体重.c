#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int pig1, pig2, pig3;

	printf("��������ֻС�������: ");
	scanf("%d %d %d", &pig1, &pig2, &pig3);

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			printf("��һֻС�����أ�����Ϊ %d\n", pig1);
		}
		else
		{
			printf("����ֻС�����أ�����Ϊ %d\n", pig3);
		}
	}
	else
	{
		if (pig2 > pig3)
		{
			printf("�ڶ�ֻС�����أ�����Ϊ %d\n", pig2);
		}
		else
		{
			printf("����ֻС�����أ�����Ϊ %d\n", pig3);
		}
	}

	system("pause");
	return 0;
}
#endif
