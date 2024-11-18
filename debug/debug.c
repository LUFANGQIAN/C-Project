#include <stdio.h>
int main()
{

    int sum = 0;

    // for (int i = 100; i <= 999; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    // }

    // printf("三位数全部偶数和为：%d", sum);

    for (int i = 100; i < 999;)
    {

        sum = sum + i;

        i = i + 2;
    }

    printf("三位数全部偶数和为：%d", sum);

    return 0;
}