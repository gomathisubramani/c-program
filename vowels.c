#include<stdio.h>
#include<string.h>
int main()
{
    char b[70];
    int count=0,i,k;
    scanf("%s",b);
    k=strlen(b);
    for(i=0;i<k;i++)
    {
    if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
    {
        count=count+1;
    }
    }
        printf("the vowels is %d",count);
    
       
}
