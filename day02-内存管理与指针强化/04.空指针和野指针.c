#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// ������NULL���߷Ƿ��ڴ濽������
void test01()
{
	//char *p = NULL;
	//// ��pָ����ڴ����򿽱�����
	//strcpy(p, "1314");

	//char *q = 0x11223344;
	//// ��qָ����ڴ����򿽱�����
	//strcpy(q, "1314");
}

// ָ�������Խ����������
int *tmpFunc()
{
	int a = 10;
	int *p = &a;
	return p;
}

// Ұָ��������
void test02()
{
	// ָ�����δ��ʼ��
	/*int *p;
	printf("%d\n", *p);*/

	// ָ���ͷź�δ�ÿ�
	char *str = malloc(100);
	free(str);
	// ��ס�ͷź��ÿգ���ֹҰָ�����
	//str = NULL;

	//free(str);
	// ��ָ������ظ��ͷš�Ұָ�벻�����ظ��ͷ�

	// ָ�������Խ����������
	int *p = tmpFunc();
	printf("%d\n", *p);
	printf("%d\n", *p);

}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	system("pause");
	return 0;
}

#endif
