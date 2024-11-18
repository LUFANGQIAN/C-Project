#include<stdio.h>

int add(int *a,int b)
{
    *a = 5;
    b = 10;
    int sum = *a+b;
	return sum;
}

int main()
{
	int a,b,c;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	c=add(&a,b);
	
	printf("Sum of %d and %d is %d \n",a,b,c);
	
    printf("a = %-10d",a);
    
    printf("b = %d",b);
    
	return 0;
}