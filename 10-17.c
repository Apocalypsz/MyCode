#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//int a = (int)3.12l;//ǿ������ת��

	//char a = '1';
	//printf("%d", sizeof(a));

	//struct����ṹ��
	struct Book
	{
		char name[20];//����
		char id[20];//���
		int price;//�۸�
	};
	struct Book b = { "C����","C2021", 55 };
	struct Book* pb = &b;
	printf("������%s\n", pb->name);//����ָ�����
	printf("������%s\n", b.name);
	printf("��ţ�%s\n", b.id);
	printf("�۸�%d\n", b.price);



	return 0;
} 