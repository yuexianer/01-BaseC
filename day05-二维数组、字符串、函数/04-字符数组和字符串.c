#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void test1()
{
	char str[6] = { 'h', 'e', 'l', 'l', 'o', '!' };
	char str2[] = "world";

	printf("%s\n", str2);
	printf("%s\n", str);
}


// ͳ���ַ�����ÿ���ַ����ֵĴ���
void test2()
{
	char str[11] = { 0 };
	// scanf("%s", str);
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &str[i]);
	}

	int count[26] = { 0 }; // ����26��Ӣ����ĸ���ֵĴ���

	for (int i = 0; i < 10; i++)
	{
		int index = str[i] - 'a';	// �û������ַ�����count�е��±�
		count[index] ++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("%c�ַ����ַ����г��� %d ��\n", i + 'a', count[i]);
		}
	}
}

int main(int argc, char* argv[])
{

	// test1();
	test2();
	system("pause");
	return 0;
}

#endif
