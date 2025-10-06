//simple interest
//#include<stdio.h>    
  //  int main (){
    //    float p,r,t,si;
      //  p = 10;
       // r = 10;
        //t = 2;
        //si = (p*r*t)/100;
       // printf("%f",si);
       // return 0;}
    



    #include<stdio.h>
        int main (){
            float p,r,t,si;
            printf("Enter the p : ");
            scanf("%f",&p);
            printf("Enter the r : ");
            scanf("%f",&r);
            printf("Enter the t : ");
            scanf("%f",&t);
            si = (p*r*t)/100;
            printf("The Simple Interest is : %f",si);
            return 0;
        }