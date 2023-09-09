#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
	struct stat buf;

	int ret = stat("06-获取文件属性.c", &buf);

	printf("文件大小： %d\n", buf.st_size);

	time_t tm = buf.st_mtime;
	struct tm *ptm = localtime(&tm);

	
	printf("文件的最后一次修改时间： %04d/%02d/%02d  %02d:%02d:%02d\n", 1900 + ptm->tm_year, 1 + ptm->tm_mon, ptm->tm_mday, ptm->tm_hour, ptm->tm_min, ptm->tm_sec);

	system("pause");
	return 0;
}

#endif
