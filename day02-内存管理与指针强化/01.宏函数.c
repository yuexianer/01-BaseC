#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


#define MYADD(x,y) ((x) + (y))

/*
	1. 宏函数需要加小括号修饰，保证运算的完整性
	2. 通常会将频繁、短小的函数写成宏函数
	3. 宏函数会比普通函数在一定程度上效率高，省去普通函数入栈出栈时间上的开销
	优点：以空间换时间
*/


int main(int argc, char* argv[])
{
	printf("%d\n", MYADD(3, 4) * 2);

	system("pause");
	return 0;
}

#endif
