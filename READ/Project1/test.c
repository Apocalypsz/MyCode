#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////ÅÐ¶Ï×ÖÄ¸ÊÇ·ñÎªÔªÒô
//char* judge(char a)
//{
//    if ((int*)a == 65 || (int*)a == 69 || (int*)a == 73 || (int*)a == 79 || (int*)a == 85 || (int*)a == 97 || (int*)a == 101 || (int*)a == 105 || (int*)a == 111 || (int*)a == 117)
//    {
//        return "Vowel";
//    }
//    else
//    {
//        return "Consonant";
//    }
//}
//
//
////ÅÐ¶Ï×ÖÄ¸ÊÇ·ñÎªÔªÒô
//int main()
//{
//    
//    int m;
//    while (scanf(" %c",&m) != EOF)
//    {
//        printf("%s\n", judge(m));
//    }
//
//
//    return 0;
//}

//ÅÐ¶ÏÊÇ·ñÊÇ×ÖÄ¸
//int main()
//{
//    int a = 0;
//    while (scanf("%c\n", &a) != EOF)
//    {
//        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//
//    }
//    return 0;
//}

//´òÓ¡¶à×éÐ±Ïß
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//
//
//
//
//    }
//
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (n != 0)
//    {
//        printf("%d", n % 10);
//        n / 10;
//    }
//
//
//    return 0;
//}

//int main()
//{
//    char a[100] = { 0 };
//    char b[100] = { 0 };
//    char c[100] = { 0 };
//    scanf("%s", a);
//
//    int i = 0;
//    while (a[i] != ',')
//    {
//        b[i] = a[i];
//        i++;
//    }
//
//    int j = 0;
//    char* pa = &a;
//    while (*pa != ',')
//    {
//        pa++;
//    }
//    pa++;
//    while (*pa != '\0')
//    {
//        c[j] = *pa;
//        pa++;
//        j++;
//    }
//
//
//    printf("%s,%s",b,c);
//
//
//
//    return 0;
//}

#include <math.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float m = (a + c + b) / 2.0;
    float n = sqrt(m * (m - a) * (m - b) * (m - c));
    printf("circumference=%.2f area=%.2f", a + b + c, m);


    return 0;
}