#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

char *func()
{
	char *p = malloc(10);	// �������ݣ�ֻҪû���ͷŶ�����ʹ��
	int c = 10;		// ��func�п���ʹ�ã�test01��main��������ʹ��
	return p;
}

void test01()
{
	int b = 10;		// ��test01��func����ʹ�ã���main�в�����ʹ��
	func();
}

int main(int argc, char* argv[])
{
	int a = 10;		// ��main��test01��func�ж�����ʹ��

	system("pause");
	return 0;
}

#endif
