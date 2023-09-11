#include "ui.h"
#include "snake.h"
#include "food.h"

int kx = 0;
int ky = 0;

void initUI(void)
{
	COORD coord;

	for (int i = 0; i < snake.size; i++)
	{
		coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}

	// È¥³ýÉßÎ²
	coord.X = lastX;
	coord.Y = lastY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');

	coord.X = food.X;
	coord.Y = food.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');

	return;
}

void initWall(void)
{
	for (int i = 0; i <= HIGH; i++)
	{
		for (int j = 0; j <= WIDTH; j++)
		{
			if (j == WIDTH)
			{
				putchar('|');
			}
			else if (i == HIGH)
			{
				putchar('_');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
