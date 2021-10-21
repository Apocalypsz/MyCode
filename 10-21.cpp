#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//冒泡排序，从小到大
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//		
//	}
//}

//打印数组
void print_arr(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

}

struct Stu
{
	char name[20];
	int age;
};

//按年龄排序从小到大
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//按名字排序从小到大
int sort_by_name (const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//结构体排序
void test()
{
	struct Stu s[] = { {"张三",30},{"李四", 40},{"王五", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄排序
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);


}








int main()
{
	//冒泡排序  
	//int arr[] = { 11,10,9,8,7,6,5,4,3,2,1,0 };
	//int sz = sizeof (arr) / sizeof (arr[0]);
	//print_arr(arr, sz);
	//bubble_sort(arr, sz);
	//print_arr(arr, sz);
	

	test();



	return 0;
}


