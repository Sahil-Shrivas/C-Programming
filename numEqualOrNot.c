#include<stdio.h>
/*6. WAP that checks whether the two numbers entered by the user are equal or not. */
void main()
{
	int  a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\na and b are equal.");
	}
	else
	{
		printf("\na and b are not equal.");
	}
}