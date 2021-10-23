#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//旋转字符串
int rotate(char* arr, int k)
{
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		int num = strlen(arr);
		char temp = arr[0];
		for (j = 0; j < num - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[num - 1] = temp;
	}



}


int main()
{
	//char* p = "hello";
	//printf("%p", *p);

	//旋转字符串
	//int k = 1;
	//char arr[] = "ABCDEFG";
	//rotate(arr, k);//k为旋转次数、arr为旋转对象
	//printf("%s\n",arr);
	//return 0;
	
	











	
}