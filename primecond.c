#include<stdio.h>
void main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d prime",n);
    }
    else
    {
        if(n%2==0)
        {
            printf("%d",n*2);
        }
        else
        {
            printf("%d",n/2);
        }
    }
}
