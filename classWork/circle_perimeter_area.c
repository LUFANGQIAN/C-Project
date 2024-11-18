#include <stdio.h>
#define PI 3.14

int g;

int main()
{
    double area;      // 面积
    double radius;    // 半径
    double perimeter; // 周长


    printf("请输入半径的值 r=");
    scanf("%f",&radius);

    area = PI * (radius * radius);
    perimeter = PI * (2 * radius);

    printf("圆的面积是：%f \n 圆的周长是：%f", area, perimeter);

    return 0;
}