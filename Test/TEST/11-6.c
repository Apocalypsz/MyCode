#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//
//输入描述：
//第一行包含一个正整数n，表示老师给出的序列有n个数。接下来有n行，每行一个正整数k，为序列中每一个元素的值。(1 ≤ n ≤ 105，1 ≤ k ≤ n)
//
//输出描述：
//输出一行，为去重排序后的序列，每个数后面有一个空格。
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
//        a[k] = k;//把数字存入数组对应的位置
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