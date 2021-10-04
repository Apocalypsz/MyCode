#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	//Öð½¥ÏÔÊ¾×Ö·û´®
	//char arr1[] = "Welcome to Bit!!!!!!!";
	//char arr2[] = "#####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep (300);
	//	system("cls");
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);

	//ÊäÈëÃÜÂë£¬Èý´Î´íÎóÍË³ö
	int i = 0;//¼ÙÉèÕýÈ·ÃÜÂëÎª123456
	char password[20] = {0};

	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}

	}
	if (3 == i)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò\n");
		
	}


	return 0;
}