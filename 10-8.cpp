#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�ж������ĺ���
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

//�ж��ǲ�������
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
	////�ж�100-200�����������ӡ+����������
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

	//�ж�1000-2000��֮������겢��ӡ
	//int y = 0;
	//for (y = 1000; y <= 2000; y++)
	//{
	//	if (is_leap_year(y) == 1)
	//	{
	//		printf("%d\n", y);
	//	}
	//}

	//������������ĳһ�������±�
	//int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//int key = 10;//Ҫ��7���±�
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//int ret = binary_search(arr, key, sz);
	//if (-1 == ret)
	//{
	//	printf("�Ҳ���");
	//}
	//else
	//{
	//	printf("��Ԫ�ص��±���%d", ret);
	//}
	//return 0;
}