#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 获取用户输入整数并输出
void test1()
{
	int a;
	
	scanf("%d", &a); //&表示取出变量a的地址。描述a的空间

	printf("a = %d\n", a);
} 

// 连续输入多个变量 char
void test2()
{
	char ch1, ch2, ch3;

	scanf("%c%c%c", &ch1, &ch2, &ch3);
	
	printf("ch1 = %c\n", ch1);
	printf("ch2 = %c\n", ch2);
	printf("ch3 = %c\n", ch3);
}

// 连续定义多个变量,用空格隔开输入 int
void test3()
{
	int a1, a2, a3;
	
	scanf("%d %d %d", &a1, &a2, &a3);

	printf("a1 = %d\n", a1);
	printf("a2 = %d\n", a2);
	printf("a3 = %d\n", a3);
}

// 用字符数组接收字符串输入
void test4()
{
	char a[20];
	
	scanf("%s", a);

	printf("a = %s\n", a);
}

// 使用getchar和putchar输入和输出字符
void test5()
{
	char ch;

	ch = getchar();	// 返回接收到的ASCII码

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
