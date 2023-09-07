#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

enum colors
{
	red = 6, yellow, pink, purple, white = -1, black, gray, cyan, green
}clo;

int main(int argc, char* argv[])
{
	int val; 
	scanf("%d", &val);
	
	switch (val)
	{
	case red:
		printf("red\n");
		break;
	case yellow:
		printf("yellow\n");
		break;
	case pink:
		printf("pink\n");
		break;
	case purple:
		printf("purple\n");
		break;
	case white:
		printf("white\n");
		break;
	case black:
		printf("black\n");
		break;
	case gray:
		printf("gray\n");
		break;
	case cyan:
		printf("cyan\n");
		break;
	case green:
		printf("green\n");
		break;
	default:
		printf("unknown\n");
		break;
	}


	system("pause");
	return 0;
}

#endif
