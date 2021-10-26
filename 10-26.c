#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





int main()
{
	//打开文件
	//FILE* pf = fopen("test.txt", "r");
	//if (NULL == pf)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}

	//写文件
	//fputc('bit',pf);

	//读文件
	int  ret = fgetc(pf);//从文件读，fgetc(stdin)从标准输入流（键盘）读
	printf("%c\n", ret);







	//关闭文件
	fclose(pf);
	pf = NULL;





	return 0;
}