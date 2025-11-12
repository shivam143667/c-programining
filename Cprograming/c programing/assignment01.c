#include<stdio.h>
int main(){

    float perimeter,area,radius;
    const float pi=3.14;

    printf("enter the value radius");
    scanf("f",&radius);

    perimeter=2*pi*radius;
    area=pi*radius*radius;

    printf("%f",perimeter );
     printf("%f",area);


}
