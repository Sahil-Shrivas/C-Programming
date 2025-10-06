#include<stdio.h>                        //cp sp if  else
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
    if(cp==sp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}