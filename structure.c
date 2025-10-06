// #include <stdio.h>
// struct
// {
//     char *engine;
// } Car1, Car2;

// int main(){
//     Car1.engine ="LG-2 EN 12";
//     Car2.engine ="LG-3 NE 21";
//     printf("%s \n", Car1.engine);
//     printf("%s \n", Car2.engine);
//     return 0;
// }




#include <stdio.h>
struct
{
    char *engine;
    int power;
    int age;
}car1, car2;

int main(){
    car1.engine ="ggggggggggg";
    car1.power =5555;
    car2.engine ="vvvvvvv";
    car2.age =32;
    printf("%s \n", car1.engine);
    printf("%d \n", car1.power);
    printf("%s \n", car2.engine);
    printf("%d \n", car2.age);
    return 0;
}
