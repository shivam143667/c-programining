#include<stdio.h>
int main(){

int day;
    //input day number
    printf("enter a day number(1-7)");
    scanf("%d",&day);
    //use switch-case to display the corresponding days
    switch(day){
case 1:
    printf("Sunday");
    break;
case 2:
    printf("Monday");
    break;
case 3:
    printf("Tuesday");
    break;
case 4:
    printf("wednesday");
    break;
case 5:
    printf("Thursday");
    break;
case 6:
    printf("friday");
    break;
case 7:
    printf("saturday");
    break;

    }
    return 0;


}
