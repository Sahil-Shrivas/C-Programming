      
 //Volume Of Sphere

#include <stdio.h>
int main ()
{
    float x;
    printf("Enter the number (vol of sphere): ");
    scanf("%f",&x);
    float v = 4*3.1415*x*x*x/3;
    printf("Print Volume Of Sphere: %f",v);

 //Area Of Circle
    float f;
    printf("\nEnter the number (area of circle): ");
    scanf("%f",&f);
    float c = 3.14*f*f;
    printf("Area of circle: %f",c);

    return 0;
}