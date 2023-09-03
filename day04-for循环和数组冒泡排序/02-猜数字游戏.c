#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));	// 种随机数种子

	int guess_number = 0;
	int random_number = rand() % 100;	// 生成随机数
	
	for (;;)
	{
		printf("请输入猜测的数字: ");
		scanf("%d", &guess_number);

		if (guess_number > random_number)	// for、while、if如果执行语句只有一条，{}可以省略不写
		{			
			printf("猜大了\n");
		}
		else if (guess_number < random_number)
			printf("猜小了\n");
		else
		{
			printf("猜中了\n");
			break;
		}
	}

	printf("本尊是 %d\n", random_number);

	system("pause");
	return 0;
}
#endif
