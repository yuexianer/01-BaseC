#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ȡ�û��������������
void test1()
{
	int a;
	
	scanf("%d", &a); //&��ʾȡ������a�ĵ�ַ������a�Ŀռ�

	printf("a = %d\n", a);
} 

// �������������� char
void test2()
{
	char ch1, ch2, ch3;

	scanf("%c%c%c", &ch1, &ch2, &ch3);
	
	printf("ch1 = %c\n", ch1);
	printf("ch2 = %c\n", ch2);
	printf("ch3 = %c\n", ch3);
}

// ��������������,�ÿո�������� int
void test3()
{
	int a1, a2, a3;
	
	scanf("%d %d %d", &a1, &a2, &a3);

	printf("a1 = %d\n", a1);
	printf("a2 = %d\n", a2);
	printf("a3 = %d\n", a3);
}

// ���ַ���������ַ�������
void test4()
{
	char a[20];
	
	scanf("%s", a);

	printf("a = %s\n", a);
}

// ʹ��getchar��putchar���������ַ�
void test5()
{
	char ch;

	ch = getchar();	// ���ؽ��յ���ASCII��

	printf("ch = %c\n", ch);

	putchar(ch);
	putchar('\n');
}

int main(int argc, char *argv[])
{
	// test1();
	// test2();
	// test3();
	// test4();
	test5();
	system("pause");
	return 0;
}
#endif
