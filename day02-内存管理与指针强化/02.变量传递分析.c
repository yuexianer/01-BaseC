#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

char *func()
{
	char *p = malloc(10);	// 堆区数据，只要没有释放都可以使用
	int c = 10;		// 在func中可以使用，test01和main都不可以使用
	return p;
}

void test01()
{
	int b = 10;		// 在test01和func可以使用，在main中不可以使用
	func();
}

int main(int argc, char* argv[])
{
	int a = 10;		// 在main、test01、func中都可以使用

	system("pause");
	return 0;
}

#endif
