#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int k;//要查找的数字
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	if (k > right) 
	{
		printf("找不到");
	}
	else
	{
		for (mid; mid != k;)
		{
			if (mid < k)
			{
				left = mid + 1;
			}
			else
				right = mid - 1;
			mid = (left + right) / 2;
		}
		printf("%d", arr[mid]);
	}
	return 0;
}