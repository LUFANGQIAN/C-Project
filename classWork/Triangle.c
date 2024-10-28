#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;
    a = 1;
    b = 2;
    c = 3;

    scanf("%f",&a);

    s = (a + b + c) * 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a=%f \n b=%f \n c=%f \n", a, b, c);
    printf("area = %f \n", area);

    return 0;
}