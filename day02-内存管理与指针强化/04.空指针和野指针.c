#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


// 不能向NULL或者非法内存拷贝数据
void test01()
{
	//char *p = NULL;
	//// 给p指向的内存区域拷贝数据
	//strcpy(p, "1314");

	//char *q = 0x11223344;
	//// 给q指向的内存区域拷贝内容
	//strcpy(q, "1314");
}

// 指针操作超越变量作用域
int *tmpFunc()
{
	int a = 10;
	int *p = &a;
	return p;
}

// 野指针出现情况
void test02()
{
	// 指针变量未初始化
	/*int *p;
	printf("%d\n", *p);*/

	// 指针释放后未置空
	char *str = malloc(100);
	free(str);
	// 记住释放后置空，防止野指针出现
	//str = NULL;

	//free(str);
	// 空指针可以重复释放、野指针不可以重复释放

	// 指针操作超越变量作用域
	int *p = tmpFunc();
	printf("%d\n", *p);
	printf("%d\n", *p);

}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	system("pause");
	return 0;
}

#endif
