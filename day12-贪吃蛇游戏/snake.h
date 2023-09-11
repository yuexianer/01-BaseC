#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include "ui.h"

typedef struct BODY
{
	int X;
	int Y;
} BODY;


struct SNAKE
{
	BODY body[WIDTH * HIGH];
	int size;
} snake;

extern int score;
extern int lastX;
extern int lastY;
extern int SPEED;

void initSnake(void);
void playGame(void);
void showScore(void);


#endif