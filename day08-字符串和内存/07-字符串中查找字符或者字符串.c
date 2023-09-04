#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	// 从左到右在字符串中查找字符
	printf("%s\n", strchr("ahahahaheiheihei", 'e'));

	// 从右往左在字符串中查找字符
	printf("%s\n", strrchr("xixihahahohoho", 'a'));

	// 字符串中查找字符串
	printf("%s\n", strstr("xixhahahohoahahahah", "haha"));

	system("pause");
	return 0;
}

#endif
