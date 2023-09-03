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


// 统计字符串中每个字符出现的次数
void test2()
{
	char str[11] = { 0 };
	// scanf("%s", str);
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &str[i]);
	}

	int count[26] = { 0 }; // 代表26个英文字母出现的次数

	for (int i = 0; i < 10; i++)
	{
		int index = str[i] - 'a';	// 用户输入字符串在count中的下标
		count[index] ++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			printf("%c字符在字符串中出现 %d 次\n", i + 'a', count[i]);
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
