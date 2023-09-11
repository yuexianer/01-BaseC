#include "snake.h"
#include "food.h"

int lastX = 0;
int lastY = 0;
int score = 0;
int SPEED = 400;

void initSnake(void)
{
	snake.size = 2;

	snake.body[0].X = WIDTH / 2;
	snake.body[0].Y = HIGH / 2;

	snake.body[1].X = WIDTH / 2 - 1;
	snake.body[1].Y = HIGH / 2;
	return;
}

void playGame(void)
{

	char key = 'd';

	// 判断蛇撞墙
	while (snake.body[0].X >= 0 && snake.body[0].X < WIDTH
		&& snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
	{
		// 更新蛇
		initUI();
		// 接收用户按键输入
		if (_kbhit())	// 为真时说明用户按下按键
		{
			key = _getch();
		}

		//printf("-----------key = %c\n", key);

		switch (key)
		{
		case 'w':
			kx = 0;
			ky = -1;
			break;
		case 's':
			kx = 0;
			ky = 1;
			break;
		case 'd':
			kx = 1;
			ky = 0;
			break;
		case 'a':
			kx = -1;
			ky = 0;
			break;
		default:
			break;
		}

		// 蛇头撞上身体
		for (int i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X
				&& snake.body[0].Y == snake.body[i].Y)
			{
				return;
			}
		}

		// 蛇头撞食物
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			initFood();		// 食物消失
			snake.size++;	// 身体增加
			score += 10;		// 加分
			// 加速
			if (SPEED >= 200)
			{
				SPEED--;
			}
		}

		// 存储蛇尾坐标
		lastX = snake.body[snake.size - 1].X;
		lastY = snake.body[snake.size - 1].Y;

		for (int i = snake.size - 1; i != 0; i--)
		{
			snake.body[i].X = snake.body[i - 1].X;
			snake.body[i].Y = snake.body[i - 1].Y;
		}

		snake.body[0].X += kx;
		snake.body[0].Y += ky;

		Sleep(SPEED);

		// 清屏操作
		//system("cls");
	}
	return;
}



void showScore()
{
	COORD coord;
	coord.X = 0;
	coord.Y = HIGH + 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	printf("Game Over!!!\n");
	printf("成绩为: %d\n", score);
}



