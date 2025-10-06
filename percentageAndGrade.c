#include<stdio.h>
/*10. WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.*/
void main() 
{
	int hindi, english, science,math,computer,sum ;
	float per;
	printf("Enter marks of Hindi=");
	scanf("%d",&hindi);
	printf("Enter marks of English=");
	scanf("%d",&english);
	printf("Enter marks of Science=");
	scanf("%d",&science);
	printf("Enter marks of Math=");
	scanf("%d",&math);
	printf("Enter marks of Computer=");
	scanf("%d",&computer);
	
	sum=hindi+english+science+math+computer;
	printf("\nSum of marks=%d",sum);
	
	per=(float)sum/5;
	printf("\nPercentage of marks=%f",per);
	
	if(per>=90&&per<=100)
	{
		printf("\nGrade A");
	}
	else if(per>=80&&per<90)
	{
		printf("\nGrade B");
	}
	else if(per>=60&&per<80)
	{
		printf("\nGrade C");
	}
	else if(per<60)
	{
		printf("\nGrade D");
	}
}