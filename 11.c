#include<stdio.h>                        //greatest of three 
int main(){
    int a;
    int b;
    int c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greater",a);
    }
    if(b>a && b>c){
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
    return 0;
}