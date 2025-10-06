#include<stdio.h>         //marks with grades
int main(){               // else if
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>80){
        printf("A grade\n");
    }
    else if(n>40){
        printf("C grade\n");
    }  
    else if(n>60){
        printf("B grade\n");
    }
    else{
        printf("D grade\n");
    }
    return 0;
}
