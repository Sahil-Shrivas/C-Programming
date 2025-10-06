#include<stdio.h>                        //cp sp else if
int main(){
    int cp;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(cp<sp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}