#include<stdio.h>
int main(){

int digit;
    //input day number
    printf("enter a number(0-9)");
    scanf("%d",&digit);
    //use switch-case to display the corresponding days
    switch(digit){
case 0:
    printf("zero");
    break;
case 1:
    printf("One");
    break;
case 2:
    printf("Two");
    break;
case 3:
    printf("Three");
    break;
case 4:
    printf("four");
    break;
case 5:
    printf("five");
    break;
case 6:
    printf("six");
    break;
case 7:
    printf("seven");
    break;
case 8:
    printf("Eight");
    break;
case 9:
    printf("Nine");
    break;
    default:
    printf("invalid input! please type a between 0-9");


    }


}

