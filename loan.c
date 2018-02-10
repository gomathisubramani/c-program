#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf("\nyears of experience");
	scanf("%d",&a);
	printf("\nemployee taken any other loan");
	scanf("%d",&b);
	printf("\n enter the salary");
	scanf("%d",&d);
	printf("\n the loan required should employee less than three month salary");
	scanf("%d",&c);
	if((a==5)&&(b==0)&&(c<d))
	{
		printf("\n the employee should be promoted");
	}
	else
	{
		printf("\n the employee should be rejected");
	}
}
