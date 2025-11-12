#include<stdio.h>
int main(){
float cp,sp,amount;

printf("enter cost price");
scanf("%f",&cp);

printf("enter selling price");
scanf("%f",&sp);

amount=sp-cp;

if (sp>cp){
    printf("profit");
}
else if (sp<cp){
    printf("loss");
}
else if (sp==cp){
    printf("There is no profit or loss");
}

}
