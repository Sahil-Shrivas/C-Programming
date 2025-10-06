#include<stdio.h>
void main()
{
	int choice,a,b;
	printf("Select your choice:\n");	
	printf("1- Add:\n");	
	printf("2- Sub:\n");	
	printf("3- Mul:\n");	
	printf("4- Div:\n");	
	printf("5- Mod:\n");
	printf("Enter number a=");	
	scanf("%d",&a);
	printf("Enter number b=");	
	scanf("%d",&b);
	printf("Enter your choice=");	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Add of a and b %d",(a+b));
			break;
		case 2:
			printf("Sub of a and b %d",(a-b));
			break;
		case 3:
			printf("Mul of a and b %d",(a*b));
			break;
		case 4:
			printf("Div of a and b %d",(a/b));
			break;
		case 5:
			printf("Mod of a and b %d",(a%b));
			break;
		default:
			printf("Wronf choice.");
		
	}
}