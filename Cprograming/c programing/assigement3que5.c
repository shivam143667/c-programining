
#include<stdio.h>
int main(){
  int mathematics,physics,chemistry,total_marks,total_mark;

  printf("Enter the obtained marks in Mathematics: ");
  scanf("%d",&mathematics);

  printf("Enter the obtained marks in Physics: ");
  scanf("%d",&physics);

  printf("Enter the obtained marks in chemistry:");
  scanf("%d",&chemistry);

  total_marks=(mathematics+physics+chemistry);
  printf("Total marks=%d\n",total_marks);

  total_mark=(mathematics+physics);
  printf(" total mark(math+physics)=%d\n",total_mark);

  if( total_marks>=190 || mathematics&physics>=140){
    printf("this candidate is eligible.");
  }
  else{
    printf("this candidate is not eligible.");
  }






}
