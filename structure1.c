#include <stdio.h>
#include<string.h>
struct employee
{
	char a[20];
	int id,salary;
}e[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    
    {
	printf("\nenter the employe name");
	scanf("%s",e[i].a);
	printf("\nenter the employee id");
	scanf("%d",&e[i].id);
	printf("\nenter the salary of the employee");
	scanf("%d",&e[i].salary);
	printf("\nthe employee name is %s",e[i].a);
	printf("\nthe employee id number is %d",e[i].id);
	printf("\nthe employee salary is %d",e[i].salary);
}
}
