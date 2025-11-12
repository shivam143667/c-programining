#include<stdio.h>
int main(){

float temp;

printf("enter the temperature:");
scanf("%f" ,&temp);

if (temp<=0){
    printf("Freezing weather:");
}
else if (temp<=10){
    printf("Very cold weather:");
}
else if (temp<=20){
    printf("Cold weather :");
    }

else if (temp<=30){
    printf("Normal in temperature:");
}
else if (temp<=40){
    printf("It's hot:");
}
else{ printf("it's very hot:");
             }

}

