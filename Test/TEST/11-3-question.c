#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//����
//    ��ɸѡ����n���ڵ�������ɸѡ��������Ϊ����2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0��
//�ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ������
//����������
//    �������룬ÿ������һ����������������100����
//���������
//    ���ÿ�����������n��������У���һ�У����n֮�ڣ�����n�����������ÿո�ָ���
//
//    �ڶ��У����������2֮����0 �ĸ�����ÿ��������С�


int main()
{
    int n = 0;
    int i = 0, j = 0;
    while (~scanf("%d", &n))
    {
        //����λ��
        int* pa = (int*)malloc(n * 4+4);//�˴�ԭΪ��n*4��������n=30ʱ�ᱨ����ԭ���ǡ��ڴ���䲻�㡱
        //��https://blog.csdn.net/u011570312/article/details/117712427������Ϊ��n*4+4�ͻָ�������
        assert(pa);
        for (i = 2; i <= n; i++)
        {
            *(pa + i) = i;
        }
        int count = 0;//2�Ժ����������

        //�ж��Ƿ�Ϊ����
        for (i = 0; i <= n; i++)
        {
            for (j = 2; j < n; j++)
            {
                if (*(pa + i) % j == 0)
                {
                    break;
                }
            }
            if (j == i)//�����ӡ
            {
                printf("%d ", i);
            }
            else if (*(pa + i) > 2)//����>2��+1
            {
                count++;
            }
        }
        printf("\n%d\n", count);
        free(pa);
        pa = NULL;
    }
    return 0;
}