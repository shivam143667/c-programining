#include<stdio.h>
int main (){

int customer_id;
char name[50];
float units,chargeperunit,amount;

printf("Enter the customer id:");
scanf("%d",&customer_id);

printf("Enter customer name:");
scanf("%s",&name);

printf("Enter the units:");
scanf("%f",&units);

if(units >=199){
    printf("1.20");
}
else if (200>=399){
    printf("1.50");

}
else if (400>=599){
    printf("1.80");

}
else if (600<units){
    printf("2.00");

}





}
