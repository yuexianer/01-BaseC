#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.1415926

int main(int argc, char *argv[])
{
	const int r = 3; // 定义了一个只读变量

	// 圆面积、周长
	float s = PI * r * r;
	float l = 2 * PI * r;

	printf("圆的周长为%f\n", l); // 默认保留6位小数
	printf("圆的面积为%f\n", s);

	printf("圆的周长还可以写为%.2f\n", l); // 保留两位小数，对第三位进行四舍五入
	printf("圆的面积还可以写为%.2f\n", s);

	system("pause");
	return 0;
}
#endif
