#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





int main()
{
	//���ļ�
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

	//д�ļ�
	//fputc('bit',pf);

	//���ļ�
	int  ret = fgetc(pf);//���ļ�����fgetc(stdin)�ӱ�׼�����������̣���
	printf("%c\n", ret);







	//�ر��ļ�
	fclose(pf);
	pf = NULL;





	return 0;
}