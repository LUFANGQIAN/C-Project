#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cin_string[100]; // 定义一个足够大的数组
    int cin_int;
    printf("请输入指数:\n");
    scanf("%s", cin_string); // 直接使用数组名作为参数
    cin_int = (int)cin_string;


    printf("您输入的指数是: %s\n", cin_string);

    int array[cin_int] = {0}; // 初始化数值为0
    int maxbit;               // 最多位数
    int index;                // 指数
    int temp;                 // 存放计算位的十位，简单来说就是 进位

    temp = 0;
    index = 1000000;
    maxbit = 1;
    array[1] = 1;

    for (int j = 1; j <= index; j++) // 此处应当是指数确定循环次数
    {
        for (int i = 1; i <= maxbit + 1; i++) // 此处的i承担正在计算的位数的职责
        {

            array[i] = array[i] * 2 + temp;
            temp = 0;

            if (array[i] > 9) // 这里是如果本位*2+temp进位大于9的情况
            {
                int copytemp = array[i];
                int ten_bit = copytemp / 10;
                int one_bit = copytemp % 10;

                temp = ten_bit;
                array[i] = one_bit;

                if (i == maxbit)
                {
                    maxbit = maxbit + 1;
                }
            }
        }
    }

    for (int i = maxbit; i > 0; i--) // 从最高位依次向下打印
    {
        printf("%d", array[i]);
    }
    printf("\n");
    printf("%d", maxbit);

    return 0;
}
