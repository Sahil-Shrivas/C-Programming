#include<stdio.h>    //divisible by 5 or 3
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("The number is divisible by 5 or 3");
    }
    else{
        printf("The number is not divisible by 5 or 3");    //thoda sa bhi dono se divisible hai toh yes btaiyega
    }
    return 0;
}