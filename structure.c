#include <stdio.h>
#include<string.h>
void main()
{
struct employee
{
	char a[20];
	int id,salary;
}e;

	printf("\nenter the employe name");
	scanf("%s",&e.a);
	printf("\nenter the employee id");
	scanf("%d",&e.id);
	printf("\nenter the salary of the employee");
	scanf("%d",&e.salary);
	printf("\nthe employee name is %s",e.a);
	printf("\nthe employee id number is %d",e.id);
	printf("\nthe employee salary is %d",e.salary);
}
