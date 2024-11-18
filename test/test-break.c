#include <stdio.h>
int main()
{
    while (1)
    {
        static int i = 1;

        if (i > 10)
        {
            break;
        }
        printf("这是第%d轮 \n", i);
        i++;
    }

    printf("这是break退出");

    return 0;
}