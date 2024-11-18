#include<stdio.H>

int main()
{
    double distance,weight,unit_price,discount,total;
    
    //输入路程重量单价
    printf("请输入总路程");
    scanf("%lf",&distance);
    printf("请输入总重量");
    scanf("%lf",&weight);
    printf("请输入每公里单价");
    scanf("%lf",&unit_price);

    //判断折扣
    if (distance<250)
    {
        discount = 0;
    }else if (distance>=250 && distance < 500)
    {
        discount = 0.02;
    }else if (distance>=500 && distance < 1000)
    {
        discount = 0.05;
    }else if (distance>=1000 && distance < 2000)
    {
        discount = 0.08;
    }else if (distance>=2000 && distance < 3000)
    {
        discount = 0.1;
    }else if (distance>=3000)
    {
        discount = 0.15;
    }else
    {
        printf("出错，数据不复合常规");
    }

    //计算总价并输出
    total = distance * weight * unit_price * (1-discount);

    printf("总价格是：%lf",total);

    return 0;
}