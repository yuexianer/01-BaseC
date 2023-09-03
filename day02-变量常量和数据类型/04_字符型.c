#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 字符与ASCII码
void test1()
{
	char ch = 'A'; // 65

	printf("1 ch = %c\n", ch);
	printf("1 ch = %d\n", ch);

	ch = 'm';

	printf("2 ch = %c\n", ch);
	printf("2 ch = %d\n", ch);

	ch = 97;
	// ch = 'a';

	printf("3 ch = %c\n", ch);
	printf("3 ch = %d\n", ch);
}

// 字符的加法
void test2()
{
	char ch = 'M';
	char var = '5';

	printf("ch = %c\n", ch);
	printf("ch +32 = %c\n", ch + 32);
	printf("var = %c\n", var);
	printf("var + 4 = %c\n", var);

	printf("'\\n'的值为 %d\n", '\n');
}

int main(int argc, char *argv[])
{
	// test1();
	test2();
	system("pause");
	return 0;
}
#endif
