#if 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int main(int argc, char* argv[])
{
	char buf[1024];

	// ��ʽ���ַ���
	memset(buf, 0, 1024);
	sprintf(buf, "I love %s, she is %d year old around", "������Ů", 99999);
	printf("%s\n", buf);

	// ƴ���ַ���
	memset(buf, 0, 1024);
	char *str1 = "������Ů";
	char *str2 = "�Ұ���";
	sprintf(buf, "%s%s", str1, str2);
	printf("%s\n", buf);

	// ����ת�ַ���
	memset(buf, 0, 1024);
	int num = 520;
	sprintf(buf, "%d", num);
	printf("%s\n", buf);

	// ���ÿ���Ҷ���
	memset(buf, 0, 1024);
	sprintf(buf, "%10d", num);
	printf("%s\n", buf);

	// ���ÿ�������
	memset(buf, 0, 1024);
	sprintf(buf, "%-10d", num);
	printf("%s|\n", buf);

	// ת��16�����ַ���
	memset(buf, 0, 1024);
	sprintf(buf, "0x%x", num);
	printf("%s\n", buf);

	// ת��8�����ַ���
	memset(buf, 0, 1024);
	sprintf(buf, "0%o", num);
	printf("%s\n", buf);

	system("pause");
	return 0;
}

#endif
