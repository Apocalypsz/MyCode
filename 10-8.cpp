#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//判断素数的函数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//			break;
//		}
//
//	}
//	return 1;
//
//}

//判断是不是闰年
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) 
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int binary_search(int a[], int b, int c)
//{
//	int left = 0;
//	int right = c - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}



int main()
{
	////判断100-200间的素数并打印+总素数数量
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	if (is_prime(i) == 1)
	//	{
	//		printf("%d\n", i);
	//		count++;
	//	}
	//	
	//}
	//printf("%d", count);

	//判断1000-2000年之间的闰年并打印
	//int y = 0;
	//for (y = 1000; y <= 2000; y++)
	//{
	//	if (is_leap_year(y) == 1)
	//	{
	//		printf("%d\n", y);
	//	}
	//}

	//查有序数组内某一个数的下标
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int key = 10;//要查7的下标
	//int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
	//int ret = binary_search(arr, key, sz);
	//if (-1 == ret)
	//{
	//	printf("找不到");
	//}
	//else
	//{
	//	printf("该元素的下标是%d", ret);
	//}
	//return 0;
}