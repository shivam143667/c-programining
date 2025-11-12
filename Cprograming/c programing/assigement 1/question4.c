#include<stdio.h>
int main(){
    float hindi, english, maths, science,computer;
    float aggregate, percentage;

printf("enter the subject hindi");
scanf("%f",&hindi);

printf("enter the subject english");
scanf("%f" ,&english);

printf("enter the subject maths");
scanf("%f" ,&maths);

printf("enter the subject science");
scanf("%f" ,&science);

printf("enter the subject computer");
scanf("%f" ,&computer);

//calculate aggregate marks of each subject by summing
aggregate=hindi+english+maths+science+computer;

//calculate percentage
percentage=(aggregate/500)*100;

//display results
printf("aggregate marks=%f",aggregate);
printf("percentage=%f", percentage);





}
