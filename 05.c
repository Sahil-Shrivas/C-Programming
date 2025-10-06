//area of circle input 
#include<stdio.h>
    int main (){
        float radius;
        printf("Enter The Radius : ");
        scanf("%f",&radius);
        float pi = 3.1415;
        float area = pi*radius*radius;
        printf("The Radius of Circle is : %f",area);
        return 0;
    }