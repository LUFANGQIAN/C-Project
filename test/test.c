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
    for (int i = 0; i < 5; i++)
    {
        printf("%s \n", getString);
    }

    char charValue = 97;

    printf("%c", charValue - 32);

    printf("%s", jianshe);

    float sum;

    sum = (float)a + b;
    printf("%f \n", sum);

    // char *cin_string;
    // printf("请输入文字 \n");
    
    // scanf("%s \n",cin_string); 目前还有问题

    // printf("您输入的文字是 %s",cin_string);

    return 0;
}