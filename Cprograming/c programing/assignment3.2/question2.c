#include<stdio.h>
int main(){
    int roll_number,a,b,c,total_marks;
    char name[20];
    float percentage;

   printf(" Enter student's roll_number : " ) ;
   scanf( "%d",&roll_number) ;

   printf("Enter student's name:");
   scanf("%s",&name);

   printf("Enter marks of subject A:");
   scanf("%d",&a);

   printf("Enter marks of subject B:");
   scanf("%d",&b);

   printf("Enter marks of subject C:");
   scanf("%d",&c);

   total_marks=a+b+c;
   printf("Total marks of three subjects= %d:",total_marks);

   percentage=total_marks/3;
   printf("\n percentage: %.2f",percentage);

   if(percentage>=60){
    printf("\n First division");
   }
   else if(percentage>=50){
    printf("\n Second division ");
   }
   else if(percentage>=40){
    printf("\n Third division");
   }
   else{ ("\n fail");
   }

}
