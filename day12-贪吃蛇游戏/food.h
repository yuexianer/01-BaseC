#ifndef __FOOD_H__
#define __FOOD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include "ui.h"

typedef struct FOOD
{
	int X;
	int Y;
} FOOD;

FOOD food;

void initFood(void);


#endif