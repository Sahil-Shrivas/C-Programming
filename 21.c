#include<stdio.h>       //display this 1,3,5,7,9...upto 'n' terms or fist n odd number
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    for (int i=1; i<=2*n-1; i=i+2){
        printf("%d ",i);
    }
    return 0;
}