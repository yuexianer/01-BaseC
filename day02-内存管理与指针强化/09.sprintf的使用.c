#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	char buf[1024];

	// 格式化字符串
	memset(buf, 0, 1024);
	sprintf(buf, "I love %s, she is %d year old around", "九天玄女", 99999);
	printf("%s\n", buf);

	// 拼接字符串
	memset(buf, 0, 1024);
	char *str1 = "九天玄女";
	char *str2 = "我爱你";
	sprintf(buf, "%s%s", str1, str2);
	printf("%s\n", buf);

	// 数字转字符串
	memset(buf, 0, 1024);
	int num = 520;
	sprintf(buf, "%d", num);
	printf("%s\n", buf);

	// 设置宽度右对齐
	memset(buf, 0, 1024);
	sprintf(buf, "%10d", num);
	printf("%s\n", buf);

	// 设置宽度左对齐
	memset(buf, 0, 1024);
	sprintf(buf, "%-10d", num);
	printf("%s|\n", buf);

	// 转成16进制字符串
	memset(buf, 0, 1024);
	sprintf(buf, "0x%x", num);
	printf("%s\n", buf);

	// 转成8进制字符串
	memset(buf, 0, 1024);
	sprintf(buf, "0%o", num);
	printf("%s\n", buf);

	system("pause");
	return 0;
}

#endif
