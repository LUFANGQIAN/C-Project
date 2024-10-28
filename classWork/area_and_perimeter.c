#include <stdio.h>

int main()
{
    double perimeter;
    double area;
    double rectangle_long;
    double rectangle_width;
    char*string;
    int test;

    test = 114514;

    printf("请输入长：");
    scanf("%lf", &rectangle_long);
    printf("请输入宽：");
    scanf("%lf", &rectangle_width);


    perimeter = (rectangle_long * 2) + (rectangle_width * 2);
    area = rectangle_long * rectangle_width;

    printf("矩形的周长为：%lf \n", perimeter);
    printf("矩形的面积为：%lf \n", area);
    printf("%1d",test);

    return 0;
}