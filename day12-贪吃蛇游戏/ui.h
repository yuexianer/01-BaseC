#ifndef __UI_H__
#define __UI_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

#define WIDTH 60
#define HIGH  20

// 用户按下按键得到的坐标值
extern int kx;
extern int ky;

void initUI(void);
void initWall(void);

#endif