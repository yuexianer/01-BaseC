#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void test01()
{
	// 字符串结束标志位 \0
	char str1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	printf("%s\n", str1);

	char str2[100] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str2);

	char str3[] = "hello";
	printf("%s\n", str3);
	printf("sizeof str3: %u\n", sizeof str3);
	printf("strlen str3: %u\n", strlen(str3));

	char str4[100] = "hello";
	printf("%s\n", str4);
	printf("sizeof str4: %u\n", sizeof str4);
	printf("strlen str4: %u\n", strlen(str4));

	char str5[] = "hello\0world";
	printf("%s\n", str5);
	printf("sizeof str5: %u\n", sizeof str5);
	printf("strlen str5: %u\n", strlen(str5));

	char str6[] = "hello\012world";
	printf("%s\n", str6);
	printf("sizeof str6: %u\n", sizeof str6);
	printf("strlen str6: %u\n", strlen(str6));
}


// 字符串拷贝实现
// 利用[]实现
void copyString01(char *dest, char *src)
{
	int len = strlen(src);
	for (int i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}

// 利用字符串指针实现
void copyString02(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void copyString03(char *dest, char *src)
{
	while (*dest++ = *src++);
}

void test02()
{
	char *str = "I love you forever!";
	char buf[1024];
	//copyString01(buf, str);
	//copyString02(buf, str);
	copyString03(buf, str);

	printf("%s\n", buf);
}


// 字符串翻转
void reverseString01(char *str)
{
	// 利用[]
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;

		start++;
		end--;
	}
}


void reverseString02(char *str)
{
	int len = strlen(str);
	char *start = str;
	char *end = str + len - 1;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}

}


void test03()
{
	char str[] = "hello world";

	//reverseString01(str);
	reverseString02(str);
	printf("%s\n", str);
}

int main(int argc, char* argv[])
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}

#endif
