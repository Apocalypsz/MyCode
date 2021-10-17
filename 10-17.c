#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//int a = (int)3.12l;//强制类型转换

	//char a = '1';
	//printf("%d", sizeof(a));

	//struct定义结构体
	struct Book
	{
		char name[20];//书名
		char id[20];//书号
		int price;//价格
	};
	struct Book b = { "C语言","C2021", 55 };
	struct Book* pb = &b;
	printf("书名：%s\n", pb->name);//可用指针访问
	printf("书名：%s\n", b.name);
	printf("书号：%s\n", b.id);
	printf("价格：%d\n", b.price);



	return 0;
} 