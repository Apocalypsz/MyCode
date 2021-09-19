#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main()
{
	char abc[] = "acac";
	char abcd[] = { 'a','c','a','c','\0'};
	//printf("%s\n",abc);
	//printf("%s\n",abcd);
	//int len = strlen(abc);
	//int len2 = strlen(abcd);
	printf("%d\n", strlen(abc));
	printf("%d\n", strlen(abcd));
	



	return 0;
}