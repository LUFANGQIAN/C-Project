#include <stdio.h>

int main()
{
    double a, b, c, max, mid, min, temp;

    printf("请输入三个实数: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         max = a; // a 是最大的
    //         if (b > c)
    //         {
    //             mid = b; // b 是中间的
    //             min = c; // c 是最小的
    //         }
    //         else
    //         {
    //             mid = c; // c 是中间的
    //             min = b; // b 是最小的
    //         }
    //     }
    //     else
    //     {
    //         max = c; // c 是最大的
    //         mid = a; // a 是中间的
    //         min = b; // b 是最小的
    //     }
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         max = b; // b 是最大的
    //         if (a > c)
    //         {
    //             mid = a; // a 是中间的
    //             min = c; // c 是最小的
    //         }
    //         else
    //         {
    //             mid = c; // c 是中间的
    //             min = a; // a 是最小的
    //         }
    //     }
    //     else
    //     {
    //         max = c; // c 是最大的
    //         mid = b; // b 是中间的
    //         min = a; // a 是最小的
    //     }
    // }

    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > b)
    {
        temp = c;
        c = b;
        b = temp;
    }
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("从小到大的顺序是: %lf %lf %lf\n", c, b, a);

    return 0;
}