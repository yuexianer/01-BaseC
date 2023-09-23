#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

int myStrstr(char *str, char *substr)
{
	int num = 0;
	
	while (*str != '\0')
	{
		if (*str != *substr)
		{
			str++;
			num++;
			continue;
		}

		// 创建两个临时指针做二次对比
		char *tmpStr = str;
		char *tmpSubstr = substr;

		while (*tmpSubstr != '\0')
		{
			if (*tmpStr != *tmpSubstr)
			{
				// 匹配失败
				str++;
				num++;
				break;
			}
			
			tmpStr++;
			tmpSubstr++;
		}

		if (*tmpSubstr == '\0')
		{
			// 匹配成功
			return num;
		}

	}
	
	return -1;
}

int myStrstrPro(char *str, char *substr)
{
	int num = 0;
	unsigned int strLen = strlen(str);
	unsigned int substrLen = strlen(substr);

	while ( strLen - num >= substrLen)
	{

		if (memcmp(str + num, substr, substrLen) != 0)
		{
			num++;
		}
		else
		{
			return num;
		}
	}

	return -1;

}

int main(int argc, char* argv[])
{
	char *str = "jiutianxuannv!love you!";

	int num = myStrstr(str, "xuannv");

	if (num != -1)
	{
		printf("查找到了子串,位置为: %d\n", num);
	}
	else
	{
		printf("未查到子串\n");
	}
	

	num = myStrstrPro(str, "love");

	if (num != -1)
	{
		printf("查找到了子串,位置为: %d\n", num);
	}
	else
	{
		printf("未查到子串\n");
	}

	system("pause");
	return 0;
}

#endif
