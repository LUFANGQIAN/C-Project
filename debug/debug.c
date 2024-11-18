#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 0;
    int b = 0;
    char input[] = "HelloWorld";

    for (size_t i = 1; i <= 9; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("%d * %d = %-4d ", j, i, i * j);
        }
        printf("\n");
    }

    printf("%s", input);

    return 0;
}