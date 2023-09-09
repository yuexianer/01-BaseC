#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>


int file_copy(char *filename1, char *filename2)
{
	FILE *rfp = fopen(filename1, "rb");
	if (rfp == NULL)
	{
		perror("file1 fopen error");
		return -1;
	}

	FILE *wfp = fopen(filename2, "wb");
	if (wfp == NULL)
	{
		perror("file2 fopen error");
		return -1;
	}

	char buff[256];
	
	int ret = 0;
	while (1)
	{
		ret = fread(buff, 1, sizeof(buff), rfp);
		printf("ret = %d\n", ret);
		if (feof(rfp))
		{
			break;
		}
		fwrite(buff, 1, ret, wfp);
	}

	fclose(wfp);
	fclose(rfp);

	return 0;
}

int main(int argc, char* argv[])
{

	if (argc != 3) return -1;

	printf("%s\n%s\n", argv[1], argv[2]);
	file_copy(argv[1], argv[2]);

	system("pause");
	return 0;
}

#endif
