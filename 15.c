#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);

    // ternary operator       if else ko hatane ke liye
    // exp1 ? exp2 : exp3

    n%2==0 ? printf("Even Number") : printf("Odd Number"); 
    return 0;
}