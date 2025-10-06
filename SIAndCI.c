#include<stdio.h>
#include<math.h>
/*2. WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest and Time are entered through the keyboard.*/
void main() 
{
	float p, r, t, a, si, ci;
	printf("Enter Principle= ");
	scanf("%f",&p);
	printf("Enter Rate= ");
	scanf("%f",&r);
	printf("Enter Time= ");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	
	printf("Simple Interest= %f",si);
	a = p*(pow((1 + r / 100), t));
	ci =  a - p;
	printf("\nCompound Interest= %f",ci);	
}