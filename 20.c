#include<stdio.h>       //print any table
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for (int i=n; i<=n*10; i=i+n){
        printf("%d",i);
        printf("\n");
    }
    return 0;
}