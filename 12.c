#include<stdio.h>                          //greagtest of three nested
int main(){
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("%d is greatest",a);
        else
        printf("%d is greatest",c);
    }
    else{
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is greatest",c);
    }
    return 0;
}