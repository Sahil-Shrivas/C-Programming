#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);

    if(n%2==0){  //even condition
        printf("The Number IS Even");
    }
    // if(n%2!=0){   //odd condition
     //   printf("The Number Is Odd");
    //}
    else{
       printf("The Number Is Odd");
    }
    return 0;
}