#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��ӡһ������ÿһλ
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
	//��ӡһ������ÿһλ
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);




	return 0;
}