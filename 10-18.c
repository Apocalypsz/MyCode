#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

//���Ƹ���string����
//void my_strcpy(char* des, char* cpy)
//{
//	while (*des++ = *cpy++)
//	{
//		;
//	}
//}



//�������ַ������Ⱥ���(size_t��������unsigned_int)
size_t my_strlen(const char* str)
{
	
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;



}

int main()
{
	//char arr1[20] = "xxxxxxxxxxxxxxxxxx";
	//char arr2[] = "hello";
	////strcpy(arr1, arr2);
	//my_strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	char arr[] = "abfkyhawvbkf";
	
	printf("%d\n", strlen(arr));
	printf("%u\n", my_strlen(arr));


	return 0;
}