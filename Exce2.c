#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//��ӡ
	//printf ("c:\\test\\windows\n");
	//printf("\"\n");

	//printf("%d\n", strlen("abcdef"));
	//printf("%d\n", strlen("c:\test\328\test.c"));


	//ѡ��
	//int input = 0;
	//printf("�����������?\n");
	//printf("������1����������0\n");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("�ߺ����");
	//else
	//	printf("���߲���");

	//int line = 0;
	//while (line < 30000)
	//{
	//	printf("д����%d\n", line);
	//	line++;
	//}
	//printf("���������۷�");


	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = ADD(num1, num2);
	printf("Sum = %d\n", sum);










	return 0;
}