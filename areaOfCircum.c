#include<stdio.h>
/*3. WAP to calculate the area and circumference of a circle. */
void main()
{
	float  r,c,a;
	printf("Enter radius=");
	scanf("%f",&r);
	
	float pi=3.14;
	
	c=2*pi*r;
	a=pi*r*r;
	printf("\nCircumference of a circle=%f",c);
	printf("\nArea of a circle=%f",a);

}
