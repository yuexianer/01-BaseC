#if 0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

// %*s 或者 %*d 跳过数据
void test01()
{
	char *str = "520jiutianxuannv";

	char buf[1024] = { 0 };
	sscanf(str, "%*d%s", buf);

	printf("%s\n", buf);
}

void test02()
{
	char *str1 = "jiutianxuannv520";
	char *str2 = "jiutianxuannv 520";
	char *str3 = "jiutianxuannv\t520";
	
	char buf1[1024] = { 0 };
	char buf2[1024] = { 0 };
	char buf3[1024] = { 0 };

	sscanf(str1, "%*[a-z]%s", buf1);
	printf("%s\n", buf1);

	// 忽略遇到空格或者\t代表忽略结束

	sscanf(str2, "%*s%s", buf2);
	printf("%s\n", buf2);

	sscanf(str3, "%*s%s", buf3);
	printf("%s\n", buf3);
}


// %[width]s 读取指定宽度的数据
void test03()
{
	char *str = "JiuTianXuanNv666";

	char buf[1024] = { 0 };
	sscanf(str, "%13s", buf);

	printf("%s\n", buf);
}

// %[a-z] 匹配a到z中的任意字符（尽可能多的匹配）
void test04()
{
	char *str = "520jiutianxuannv@iloveu";

	char buf[1024] = { 0 };
	sscanf(str, "%*d%[a-z]", buf);

	printf("%s\n", buf);
}

void test05()
{
	char *str = "5201314jiutianxuannv";

	char buf[1024] = { 0 };
	sscanf(str, "%[0-9]", buf);

	printf("%s\n", buf);
}

// %[aBc] 匹配a、B、c中的一员
void test06()
{
	char *str = "jiutianxuannv";

	char buf[1024] = { 0 };
	sscanf(str, "%[aijntu]", buf);

	printf("%s\n", buf);
}

// %[^a]  匹配非a的任意字符
void test07()
{
	char *str = "jiutianxuannv";

	char buf[1024] = { 0 };
	sscanf(str, "%[^x]", buf);

	printf("%s\n", buf);
}

// %[^a-z]  表示读取除a-z以外的所有字符
void test08()
{
	char *str = "jiutianxuannv520";

	char buf[1024] = { 0 };
	sscanf(str, "%[^0-9]", buf);

	printf("%s\n", buf);
}

// 练习1: 匹配IP地址中的所有数字

void test09()
{
	char *ip = "127.0.0.1";

	int ip1 = 0;
	int ip2 = 0;
	int ip3 = 0;
	int ip4 = 0;

	sscanf(ip, "%d.%d.%d.%d", &ip1, &ip2, &ip3, &ip4);

	printf("%d %d %d %d\n", ip1, ip2, ip3, ip4);
}

// 匹配#与@之间的名字
void test10()
{
	char *str = "abcdef#zhangtao@123456";

	char buf[1024] = { 0 };
	sscanf(str, "%*[^#]#%[^@]", buf);

	printf("%s\n", buf);
}

// 已给定字符串为: helloworld@itcast.cn,请编码实现 helloworld 输出和 itcast.cn 输出。
void test11()
{
	char *str = "helloworld@itcast.cn";

	char buf1[1024] = { 0 };
	char buf2[1024] = { 0 };
	sscanf(str, "%[^@]%*[@]%s", buf1, buf2);

	printf("%s  %s\n", buf1, buf2);
}

int main(int argc, char* argv[])
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	test11();

	system("pause");
	return 0;
}

#endif
