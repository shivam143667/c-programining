#include<stdio.h>
int main(){

float km,meter,feet,inche,centimeter;
printf("enter the value of distance b\w two cities(in km)");
scanf("%f",&km);

meter=km*1000;
feet=meter*3.28084;
inche=feet*12;
centimeter=km*100000;

printf("%f",km);
printf("%f",meter);
printf("%f",feet);
printf("%f",centimeter);


}
