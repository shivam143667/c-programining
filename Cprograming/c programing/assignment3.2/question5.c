#include<stdio.h>
int main (){

 //input three angles
 float angle1, angle2, angle3, sum;

     printf("enter the three angles of a triangle:");
     scanf("%f%f%f",&angle1,&angle2,&angle3);

     //calculate the angles
     sum=angle1+angle2+angle3;

     //check validity and display result
     if(sum==180&&angle1>0&&angle2>0&&angle3>0){
        printf("the triangle is valid");
     }
     else{
        printf("the triangle is not valid");
     }
}
