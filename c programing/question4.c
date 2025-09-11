#include<stdio.h>
int main(){
    int totalminute;
    int minute;
    int hour;
    printf("enter the value of total minute");
        scanf("%d",&totalminute);

        hour=totalminute/60;

        minute=totalminute%60;

        printf("hour=%d",hour);
        printf("minute=%d",minute);






}
