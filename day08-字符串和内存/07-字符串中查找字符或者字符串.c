#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	// ���������ַ����в����ַ�
	printf("%s\n", strchr("ahahahaheiheihei", 'e'));

	// �����������ַ����в����ַ�
	printf("%s\n", strrchr("xixihahahohoho", 'a'));

	// �ַ����в����ַ���
	printf("%s\n", strstr("xixhahahohoahahahah", "haha"));

	system("pause");
	return 0;
}

#endif
