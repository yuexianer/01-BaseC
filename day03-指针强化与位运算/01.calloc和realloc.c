#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// calloc
void test01()
{
	int *p = malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	putchar('\n');

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

	// calloc分配在堆区，与malloc不一样的是calloc分配会初始化数据为0
	p = calloc(5, sizeof(int));
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	putchar('\n');

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}


// realloc 重新分配内存
void test02()
{
	int *p = malloc(sizeof(int)* 5);

	printf("p = %p\n", p);

	for (int i = 0; i < 5; i++)
	{
		p[i] = i * 2;
		printf("%d ", p[i]);
	}
	putchar('\n');

	// 重新分配内存比原来大，不会初始化新空间为0
	p = realloc(p, sizeof(int) * 6);
	
	printf("p = %p\n", p);

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", p[i]);
	}
	putchar('\n');

	p = realloc(p, sizeof(int)* 1000);

	printf("p = %p\n", p);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	putchar('\n');

	// 如果重新分配的内存比原来小，那么释放后续空间，只有权限操作申请的空间
	p = realloc(p, sizeof(int)* 2);

	printf("p = %p\n", p);
	
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", p[i]);
	}
	putchar('\n');

	printf("p[3] = %d\n", p[3]);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}

}

int main(int argc, char* argv[])
{
	//test01();
	test02();

	system("pause");
	return 0;
}

#endif
