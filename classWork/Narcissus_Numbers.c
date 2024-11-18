#include <stdio.h>

int main()
{
    // 首先取各个位上的数字，然后将其每位进行三次方，之后相加，然后判断是否与原三位数相等，如果相等就打印，如果不等，则下一轮
    int one, ten, had, sum;
    one = ten = had = 0;

    // 遍历所有三位数，寻找满足条件的水仙花数
    for (int i = 100; i <= 999; i++)
    {
        // 取百位
        had = i / 100;
        // 取十位
        ten = i / 10 % 10;
        // 取个位
        one = i % 10;

        // 计算各位数字立方和
        sum = had * had * had + ten * ten * ten + one * one * one;

        // 判断是否为水仙花数
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}