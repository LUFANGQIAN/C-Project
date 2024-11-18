#include <stdio.h>

int main()
{
    int number;
    int temp;
    int digit;

    printf("请输入一个整数: ");
    scanf("%lld", &number);

    // 将负数转换为正数
    if (number < 0)
    {
        number = -number;
    }

    temp = number;

    // 提取每一位数字
    while (temp > 0)
    {
        digit = temp % 10;
        printf("数字: %d\n", digit);
        temp = temp / 10;
    }

    return 0;
}