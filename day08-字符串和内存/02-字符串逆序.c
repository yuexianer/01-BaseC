#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// 字符串逆序
void str_inverse(char *str)
{
	char *start = str;						// 记录首元素地址
	char *end = str + strlen(str) - 1;		// 记录最后一个元素地址

	while (start < end)						// 首元素地址是否小于最后一个元素地址
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;							// 首元素对应指针后移
		end--;								// 尾元素对应指针前移
	}
}

int main(int argc, char* argv[])
{
	char str[] = "ni hao sao ya ha ha ha ha ha";

	str_inverse(str);

	printf("%s\n", str);

	system("pause");
	return 0;
}

#endif
