#include<stdio.h>
int main (){
char c;

printf("Enter an alphabet ");
scanf("%c",&c);

if(c=='E'){
    printf("Excellent");
}
else if(c=='V'){
    printf("Very Good");
}
else if(c=='G'){
    printf("Good");
}
else if(c=='A'){
    printf("Average");
}
else if (c=='F'){
    printf("Fail");
}
else{
    printf("invalid");
}


}
