#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//�жϻ��ģ�����ture��false
//bool judge(char* str)
//{
//	char* left = str;
//
//	int len = strlen(str);
//
//	char* right = str + len-1;
//
//	while (left < right)
//	{
//		if (*right - *left != 0)
//		{
//			return false;
//		}
//		else
//		{
//			left++;
//			right--;
//		}
//	}
//	return true;
//}

//�ҳ�ȱʧ������
//int solve(int* a, int aLen)
//{
//	int s = (aLen + 1) * (aLen) / 2;
//	int sum = 0;
//	for (int i = 0; i < aLen; i++)
//		sum += a[i];
//	return s - sum;
//}

//int main()
//{
//	//int a = 1,b = 2,c = 3;
//	//printf("\n%d - %d - %d\n", a + b + c, (b = b * 2), (c = c * 2));//�����11-4-6
//
//	//char* ptr = "FishC";
//	//printf("%c\n", *ptr++);
//	//printf("%c\n", *ptr);
//	//printf("%c\n", *ptr++);
//	//printf("%c\n", *ptr);
//
//	//int arr[10] = {0,1,2,4,5,6,7,8,9};
//	//printf("%d",solve(&arr, 10));
//	int a = 1244;
//	printf("%d", sizeof(a));
//
//	return 0;
//}

