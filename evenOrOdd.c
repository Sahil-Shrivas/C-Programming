#include<stdio.h>
/*8. WAP that finds whether a given number is even or odd. */
void main()
{
	int  n;
	printf("Enter a number=");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\nn is even number.");
	}
	else
	{
		printf("\nn is odd number.");
	}
}