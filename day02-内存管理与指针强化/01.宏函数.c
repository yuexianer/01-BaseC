#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


#define MYADD(x,y) ((x) + (y))

/*
	1. �꺯����Ҫ��С�������Σ���֤�����������
	2. ͨ���ὫƵ������С�ĺ���д�ɺ꺯��
	3. �꺯�������ͨ������һ���̶���Ч�ʸߣ�ʡȥ��ͨ������ջ��ջʱ���ϵĿ���
	�ŵ㣺�Կռ任ʱ��
*/


int main(int argc, char* argv[])
{
	printf("%d\n", MYADD(3, 4) * 2);

	system("pause");
	return 0;
}

#endif
