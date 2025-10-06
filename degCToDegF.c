#include<stdio.h>
/*4. WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9. */
void main()
{
	float c,f;
	printf("Enter Centigrade=");
	scanf("%f",&c);
	f=(9*c)/5+32;
	
	printf("Fahrenheit=%f",f);
}
