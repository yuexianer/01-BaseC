#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main(int argc, char *argv[])
{
	int h, m, s;

	// 小时
	for (h = 0; h < 24; h ++)
		// 分钟
		for (m = 0; m < 60; m ++)
			// 秒
			for (s = 0; s < 60; s++)
			{
				printf("%02d:%02d:%02d\n", h, m, s);
				Sleep(980);
				system("cls");	// 清屏
			}

	system("pause");
	return 0;
}
#endif
