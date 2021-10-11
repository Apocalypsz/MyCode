#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//打印一个数的每一位
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	//打印一个数的每一位
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);




	return 0;
}