
#include<stdio.h>
int main(){
    float radius,perimeter,area;
    float const pi=3.14;
    printf("enter the radius");
    scanf("%f",&radius);
    perimeter=2*radius*radius;
    area=pi*radius*radius;
    printf("%f",perimeter);
    printf("%f",area);
}
