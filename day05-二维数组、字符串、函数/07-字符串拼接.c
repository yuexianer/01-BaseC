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
	char str1[] = "hello";
	char str2[] = "world";
	char str3[100];

	int i = 0;	// ѭ��str1
	while (str1[i] != '\0')
	{
		str3[i] = str1[i];	// ѭ���Ž�str1�е�ÿһ��Ԫ�ؽ���str3
		i++;
	}	// str3=[h e l l o]

	int j = 0;	// ѭ��str2
	while (str2[j]) // �ȼ��� while(str2[j] != 0),Ҳ�ȼ��� while(str2[j] != '\0')
	{
		str3[i + j] = str2[j];
		j++;
	}	// str3=[h e l l o w o r l d]

	// �ֶ����\0�ַ����������
	str3[i + j] = '\0';

	printf("%s\n", str3);

	system("pause");
	return 0;
}

#endif
