#include<stdio.h>

int main()
{
    int a;
    int *p;

    a = 1000;
    p = &a;

    printf("这是指针，他本身的值为%p,这个这个指针的地址是%p,这个指针他指向的值是%d",p,&p,*p);

    return 0;
}