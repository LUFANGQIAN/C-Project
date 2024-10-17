#include <stdio.h>
#include <stdlib.h>
#include "test.h"

#define jianshe "傻蛋建社"

int main()
{
    int a = 1;
    int b = 2;
    int count;

    const char *getString;

    getString = print();
    // count = sum(a, b);
    // printf("%d", count);
    // printf("\n");
    for (int i = 0; i < 5;)

    {
        printf("%d \n", ++i);
    }

    // char charValue = 97;

    // printf("%c", charValue - 32);

    // printf("%s", jianshe);

    // float sum;

    // sum = (float)a + b;
    // printf("%f \n", sum);
    char cin_string[100]; // 定义一个足够大的数组
    printf("请输入文字:\n");
    scanf("%s", cin_string); // 直接使用数组名作为参数
    printf("您输入的文字是: %s\n", cin_string);

    return 0;
}