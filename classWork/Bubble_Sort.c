#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

// 冒泡排序函数
void modifyarry(int arr[], int size)
{
    int i, j, temp;
    bool swapped;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换元素
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//玩家们只要玩就好，而策划们就要考虑的很多了

bool Reasonable_judgment(int temp)
{
    if (temp <= 20)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Input_Number = 0;
    bool legality;
    int size;

    // 本模块起到的作用是检测输入的值是否合理，最终输出的是一个合理的Input_Number(数组元素个数)
    while (1)
    {
        printf("请输入将要排序的实数个数:");
        scanf("%d", &Input_Number);

        legality = Reasonable_judgment(Input_Number);
        if (legality)
        {
            break;
        }
        printf("错误：输入数值过大,请重新输入 \n");

        Sleep(2000);
        system("cls");
    }

    // 本模块起到从键盘输入为数组赋值
    int *array = (int *)malloc(Input_Number * sizeof(int));
    if (array == NULL)
    {
        printf("内存分配失败\n");
        return 1;
    }

    for (int i = 0; i < Input_Number; i++)
    {
        printf("请输入第%d个实数:", i + 1);
        scanf("%d", &array[i]);
        system("cls");
    }

    // 调用冒泡排序函数
    modifyarry(array, Input_Number);

    // 测试打印
    for (int i = 0; i < Input_Number; i++)
    {
        printf("第%d个值为 %d \n", i + 1, array[i]);
    }

    // 释放分配的内存
    free(array);

    return 0;
}