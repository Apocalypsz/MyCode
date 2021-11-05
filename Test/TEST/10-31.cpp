#include <stdio.h>

int main()
{
int i = 0;
int j = 0;
int num = 0;
for (i = 101; i < 1000; i + 2)
{
    int count = 0;
    for (j = 3; j <= i; j + 2)
    {
        if (i % j == 0 && j != i)
        {
            count++;
            break;
        }

    }
    if (count == 1)
    {
        num++;
    }
}
printf("%d", num);

return 0;
}