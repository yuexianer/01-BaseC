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
	char str1[] = "hello";
	char str2[] = "world";
	char str3[100];

	int i = 0;	// 循环str1
	while (str1[i] != '\0')
	{
		str3[i] = str1[i];	// 循环着将str1中的每一个元素交给str3
		i++;
	}	// str3=[h e l l o]

	int j = 0;	// 循环str2
	while (str2[j]) // 等价于 while(str2[j] != 0),也等价于 while(str2[j] != '\0')
	{
		str3[i + j] = str2[j];
		j++;
	}	// str3=[h e l l o w o r l d]

	// 手动添加\0字符串结束标记
	str3[i + j] = '\0';

	printf("%s\n", str3);

	system("pause");
	return 0;
}

#endif
