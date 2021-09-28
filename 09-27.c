#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//

int Div(int x)
{
	if (x % 5 == 0)
		printf("YES");
	else
		printf("NO");
}




int main()
{
	//char arr[] = { 'a', 'b', 'c', '\0' };
	//int a = strlen(arr);
	//printf("%d\n", a);
	//int i = 0;
	//while (i < a)
	//{
	//	printf("%c\n", arr[i]);
	//	i++;
	//}

	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int m = Max(a, b);
	//printf("%d\n", m);
	int x;
	scanf("%d", &x);
	Div(x);








	return 0;
}