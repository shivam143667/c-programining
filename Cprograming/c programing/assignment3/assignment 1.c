#include<stdio.h>
int main(){
    int leap_year;
    printf("enter the leap year");
    scanf("%d",&leap_year);
    if(leap_year%4==0){
        printf("leap year");
    }
    else if(leap_year % 100==0 || leap_year %400==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
}
    }

