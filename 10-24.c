#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>






int main()
{
	FILE* pf = fopen("test888.txt", "r");
	//0      "no error"
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;//��ִ������Ĵ���
	}
	fclose(pf);
	pf = NULL;



	 

	return 0;
}




