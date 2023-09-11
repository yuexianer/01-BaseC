#include "food.h"


void initFood(void)
{
	food.X = rand() % WIDTH;
	food.Y = rand() % HIGH;

	return;
}
