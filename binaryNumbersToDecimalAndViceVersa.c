#include<stdio.h>
#include<math.h>
void main()
{
	int n,r,rev=0,p=0;
	printf("Enter binary number=");	
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r!=0)
		{
			rev= rev+(int)pow(2,p);
		}	
		n=n/10;	
		p++;
	}
	printf("Decimal number=%d",rev);		
}
