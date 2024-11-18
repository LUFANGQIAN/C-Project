#include <stdio.h>
int main()
{
    
    int i = 1;
    int sum1 = 0;
    int sum2 = 0;
    int j = 100;
    do
    {
        sum1 = sum1 + i;
        i++;
    } while (i <= 100);

    printf("1到100的和为 %d\n", sum1);


    do
    {
        sum2 = sum2 + j;
        j=j+2;
    } while (j<999);
    printf("100到999之间的偶数和为 %d\n", sum2);
    
    return 0;
}