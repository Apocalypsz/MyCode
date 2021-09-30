#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = 2;
	//if (a == 1)
	//{
	//	if (b == 0)
	//		printf("hehe\n");
	//}
	//else
	//	printf("haha\n");
	
	//int a = 0;
	//scanf("%d", &a);
	//if (a % 2 == 0)
	//	printf("不是奇数");
	//else
	//	printf("是奇数");
	int i = 1;
	while (i < 101) 
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
		
	return 0;
}