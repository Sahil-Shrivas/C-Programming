#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("The Number is divisible by 5");
    }
        else{
            printf("The Number is not divisible by 5");
        }
    
return 0;
}