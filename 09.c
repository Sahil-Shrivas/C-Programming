#include<stdio.h>   //three digit number
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("It is a three digit number");
    }
    else{
        printf("It is not a three digit number");
    }
    return 0;
}