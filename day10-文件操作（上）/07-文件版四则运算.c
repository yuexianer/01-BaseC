#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define N 20

// 四则运算写入
void write_file(char *filename)
{
	srand((unsigned int)time(NULL));

	char buf[4096] = { 0 };
	FILE *fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < N; i++)
	{
		int number1 = rand() % 1000 + 1;
		char ch = rand() % 4;
		int number2 = rand() % 1000 + 1;

		switch (ch)
		{
		case 0:
			ch = '+';
			break;
		case 1:
			ch = '-';
			break;
		case 2:
			ch = '*';
			break;
		case 3:
			ch = '/';
			break;
		}

		sprintf(buf, "%d%c%d=\n", number1, ch, number2);
		fputs(buf, fp);
		fputs(buf, stdout);
	}

	fclose(fp);
}

int calc(char ch, int number1, int number2)
{
	switch (ch)
	{
	case '+':
		return number1 + number2;
	case '-':
		return number1 - number2;
	case '*':
		return number1 * number2;
	case '/':
		return number1 / number2;
	default:
		break;
	}
}

void read_files(char *filename)
{
	
	char res_buf[4096] = { 0 };
	char buf[4096] = { 0 };

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	while (1)
	{
		fgets(buf, 4096, fp);
		
		if (feof(fp))
		{
			break;
		}

		int number1 = 0;
		int number2 = 0;
		char op = 0;
		sscanf(buf, "%d%c%d=\n", &number1, &op, &number2);

		int op_res = calc(op, number1, number2);

		sprintf(buf, "%d%c%d=%d\n", number1, op, number2, op_res);
		strcat(res_buf, buf);
	}

	fclose(fp);

	fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen error");
		return;
	}

	fputs(res_buf, fp);

	fclose(fp);

}

int main(int argc, char* argv[])
{
	char *filename = "test07-1.txt";

	write_file(filename);
	printf("==========================\n");

	read_files(filename);

	system("pause");
	return 0;
}

#endif
