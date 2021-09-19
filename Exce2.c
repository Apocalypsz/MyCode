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
	//打印
	//printf ("c:\\test\\windows\n");
	//printf("\"\n");

	//printf("%d\n", strlen("abcdef"));
	//printf("%d\n", strlen("c:\test\328\test.c"));


	//选择
	//int input = 0;
	//printf("你渴望力量吗?\n");
	//printf("渴望扣1，不渴望扣0\n");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("芜湖起飞");
	//else
	//	printf("慢走不送");

	//int line = 0;
	//while (line < 30000)
	//{
	//	printf("写代码%d\n", line);
	//	line++;
	//}
	//printf("走上人生巅峰");


	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = ADD(num1, num2);
	printf("Sum = %d\n", sum);










	return 0;
}