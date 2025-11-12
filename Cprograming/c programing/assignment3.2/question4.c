#include<stdio.h>
int main () {

int side1, side2, side3;

printf("enter the length of the three sides of the triangle:");
scanf("%f%f%f",&side1,&side2,&side3);

if(side1==side2&&side2==side3){
    printf("the triangle of Equilateral");
}
else if(side1==side2||side2==side3||side1==side3){
    printf("the triangle is isosceles");
}
else {
    printf("the triangle is scalene");
}


}

