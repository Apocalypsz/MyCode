#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//描述
//    用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，
//再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。
//输入描述：
//    多组输入，每行输入一个正整数（不大于100）。
//输出描述：
//    针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
//
//    第二行，输出数组中2之后被清0 的个数。每行输出后换行。


int main()
{
    int n = 0;
    int i = 0, j = 0;
    while (~scanf("%d", &n))
    {
        //创建位置
        int* pa = (int*)malloc(n * 4+4);//此处原为（n*4），但当n=30时会报错，原因是“内存分配不足”
        //（https://blog.csdn.net/u011570312/article/details/117712427）但改为（n*4+4就恢复正常）
        assert(pa);
        for (i = 2; i <= n; i++)
        {
            *(pa + i) = i;
        }
        int count = 0;//2以后非素数数量

        //判断是否为素数
        for (i = 0; i <= n; i++)
        {
            for (j = 2; j < n; j++)
            {
                if (*(pa + i) % j == 0)
                {
                    break;
                }
            }
            if (j == i)//是则打印
            {
                printf("%d ", i);
            }
            else if (*(pa + i) > 2)//否且>2则+1
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