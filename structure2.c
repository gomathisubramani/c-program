#include <stdio.h>
#include<string.h>
struct name
{
	char a[50];
}n[10];
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nenter the name ");
		scanf("%s",n[i].a);
		printf("the name is %s",n[i].a);
	}
}
