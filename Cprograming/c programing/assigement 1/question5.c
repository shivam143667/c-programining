#include<stdio.h>
int main (){

float total_selling_price, total_profit, cost_price;

printf("total selling price of 15 items:");
scanf("%f" ,&total_selling_price);

printf("total profit earn of 15 items:");
scanf("%f" ,&total_profit);

cost_price=(total_selling_price-total_profit)/15;

printf("cost price of one item= %f" ,cost_price);




}
