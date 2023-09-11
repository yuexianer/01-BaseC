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

	// �ж���ײǽ
	while (snake.body[0].X >= 0 && snake.body[0].X < WIDTH
		&& snake.body[0].Y >= 0 && snake.body[0].Y < HIGH)
	{
		// ������
		initUI();
		// �����û���������
		if (_kbhit())	// Ϊ��ʱ˵���û����°���
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

		// ��ͷײ������
		for (int i = 1; i < snake.size; i++)
		{
			if (snake.body[0].X == snake.body[i].X
				&& snake.body[0].Y == snake.body[i].Y)
			{
				return;
			}
		}

		// ��ͷײʳ��
		if (snake.body[0].X == food.X && snake.body[0].Y == food.Y)
		{
			initFood();		// ʳ����ʧ
			snake.size++;	// ��������
			score += 10;		// �ӷ�
			// ����
			if (SPEED >= 200)
			{
				SPEED--;
			}
		}

		// �洢��β����
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

		// ��������
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
	printf("�ɼ�Ϊ: %d\n", score);
}



