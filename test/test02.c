#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mian()
{
    int rui;
    int xue;

    printf("请输入两个值\n");
    scanf("%d", &rui);
    scanf("%d", &xue);
    printf("%d", rui + xue);

    return 0;
}