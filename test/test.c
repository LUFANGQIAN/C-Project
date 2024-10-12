#include <stdio.h>
#include <stdlib.h>
#include "test.h"

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
    for (int i = 0; i < 1000; i++)
    {
        printf("%s \n", getString);
    }

    return 0;
}