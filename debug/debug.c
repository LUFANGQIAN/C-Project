#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double bottom;
    double height;  // 更正了拼写错误
    double area;

    printf("请输入底部值: ");  // 添加冒号和空格以提高用户友好度
    scanf("%lf", &bottom);  // 使用 %lf 作为 double 的格式说明符

    printf("请输入高度值: ");  // 添加冒号和空格以提高用户友好度
    scanf("%lf", &height);  // 使用 %lf 作为 double 的格式说明符

    printf("三角形的底为: %f \n三角形的高为: %f \n", bottom, height);

    area = (height * bottom) / 2;

    printf("三角形的面积为: %f\n", area);  // 添加换行符以提高输出格式

    return 0;
}