#if 1

#define _CRT_SECURE_NO_WARNINGS

#include "myHead.h"

int main(int argc, char* argv[])
{
	int arr[] = { 1, 3, 5, 3, 4, -2, 43, 54, 0, -9 };

	my_bubble_sort(arr);

	print_array(arr);

	system("pause");
	return 0;
}

#endif
