#include<stdio.h>
int main(){
    float gross_salary,basic_salary,dearness_allowance,houserent;

    printf("enter the value basic_salary");
    scanf("%f",&basic_salary);

    dearness_allowance=0.40*basic_salary;
    houserent=0.20*basic_salary;
    gross_salary= basic_salary+dearness_allowance+houserent;

    printf("%f",dearness_allowance);
    printf("%f",houserent);
    printf("%f",gross_salary);




}
