#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// static ��̬����
// �ص㣺������ǰ�����ڴ棬�������н������������ڽ������ڱ��ļ��ڲ�������ʹ�þ�̬����
// ȫ��������a
static int a = 10;

void test01()
{
	// �ֲ�������b
	static int b = 20;
}

int main(int argc, char* argv[])
{
	// ���߱����� ��������е�g_a��Ҫ�������ⲿ�������ԣ��������ļ���
	extern int g_a;

	printf("%d\n", g_a);

	system("pause");
	return 0;
}

#endif
