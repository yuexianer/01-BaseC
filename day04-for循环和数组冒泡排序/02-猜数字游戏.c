#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));	// �����������

	int guess_number = 0;
	int random_number = rand() % 100;	// ���������
	
	for (;;)
	{
		printf("������²������: ");
		scanf("%d", &guess_number);

		if (guess_number > random_number)	// for��while��if���ִ�����ֻ��һ����{}����ʡ�Բ�д
		{			
			printf("�´���\n");
		}
		else if (guess_number < random_number)
			printf("��С��\n");
		else
		{
			printf("������\n");
			break;
		}
	}

	printf("������ %d\n", random_number);

	system("pause");
	return 0;
}
#endif
