#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	int score;
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10:
	case 9:
		printf("优秀\n");
		break;
	case 8:
	case 7:
		printf("良好\n");
		break;
	case 6:
		printf("及格\n");
		break;
	default:
		printf("不及格\n");
		break;
	}

	system("pause");
	return 0;
}
#endif
