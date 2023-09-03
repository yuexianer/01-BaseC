#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// strstr函数测试
void test1()
{
	char *ret = strstr("hellollollo", "oll");

	printf("ret = %s\n", ret);
}

// 统计字符串中子串出现的次数
int str_times(const char *str, const char *substr)
{
	int count = 0;
	char *p = str;

	while (p = strstr(p, substr))
	{
		p += strlen(substr);
		count++;
	}

	return count;
}

int main(int argc, char* argv[])
{
	//test1();

	char *str = "hellollollollollollo";
	char *substr = "lol";

	int ret = str_times(str, substr);

	printf("出现 %d 次\n", ret);

	system("pause");
	return 0;
}

#endif
