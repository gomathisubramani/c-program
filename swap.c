#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swpping number is %d %d",a,b);
}
