#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i=i+2){
        printf("hyyyyy\n");
    }
    printf("%d",n);
    return 0;
}