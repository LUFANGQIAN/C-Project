#include <stdio.h>

// 程序的主入口
int main()
{
    // 输出语句
    int valueInt;
    // valueInt赋值为1
    valueInt = 78;
    // printf是系统默认的函数
    printf("valueInt=%d \n", valueInt);
    printf("sizeof(valueInt)=%lu \n", sizeof(valueInt));
    // 定义了一个long int类型变量valueLongInt,同时初始化为100
    long int valueLongInt = 100;
    printf("sizeof(valueLongInt)=%lu \n", sizeof(valueLongInt));
    /*程序结束了
    这里的0，需要与上面的int相呼应*/
    return 0;
}