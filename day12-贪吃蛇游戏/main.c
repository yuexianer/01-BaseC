#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

#include "snake.h"
#include "food.h"

int main()
{
	CONSOLE_CURSOR_INFO cci;

	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);

	srand((unsigned int)time(NULL));

	initSnake();
	initFood();

	initWall();
	initUI();
	
	playGame();

	showScore();
	//printf("snake 头: x = %d, y = %d\n", snake.body[0].X, snake.body[0].Y);
	//printf("snake 尾: x = %d, y = %d\n", snake.body[1].X, snake.body[1].Y);

	//printf("food: x = %d, y = %d\n", food.X, food.Y);

	system("pause");
	return 0;
}