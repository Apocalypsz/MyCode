#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ð�����򣬴�С����
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

//��ӡ����
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

//�����������С����
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//�����������С����
int sort_by_name (const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//�ṹ������
void test()
{
	struct Stu s[] = { {"����",30},{"����", 40},{"����", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//������������
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);


}








int main()
{
	//ð������  
	//int arr[] = { 11,10,9,8,7,6,5,4,3,2,1,0 };
	//int sz = sizeof (arr) / sizeof (arr[0]);
	//print_arr(arr, sz);
	//bubble_sort(arr, sz);
	//print_arr(arr, sz);
	

	test();



	return 0;
}


