#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С�������򡣵�����ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
//
//����������
//��һ�а���һ��������n����ʾ��ʦ������������n��������������n�У�ÿ��һ��������k��Ϊ������ÿһ��Ԫ�ص�ֵ��(1 �� n �� 105��1 �� k �� n)
//
//���������
//���һ�У�Ϊȥ�����������У�ÿ����������һ���ո�
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i;
//    int k = 0;
//    int a[100001] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &k);
//        a[k] = k;//�����ִ��������Ӧ��λ��
//    }
//    for (i = 1; i < 100001; i++)
//    {
//        if (a[i] != 0)
//            printf("%d ", a[i]);
//    }
//    return 0;
//}

int main()
{
    int n = 0, m = 0;
    scanf("%d", &n);
    int arr[10] = { 0 };
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);

    }

    scanf(" %d", &m);

    for (i = 0; i < n; i++)
    {
        if (arr[i] = m)
        {
            for (j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    }
    printf("%d\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}