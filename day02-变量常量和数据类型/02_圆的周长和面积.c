#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.1415926

int main(int argc, char *argv[])
{
	const int r = 3; // ������һ��ֻ������

	// Բ������ܳ�
	float s = PI * r * r;
	float l = 2 * PI * r;

	printf("Բ���ܳ�Ϊ%f\n", l); // Ĭ�ϱ���6λС��
	printf("Բ�����Ϊ%f\n", s);

	printf("Բ���ܳ�������дΪ%.2f\n", l); // ������λС�����Ե���λ������������
	printf("Բ�����������дΪ%.2f\n", s);

	system("pause");
	return 0;
}
#endif
