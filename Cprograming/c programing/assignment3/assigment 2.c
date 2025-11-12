#include<stdio.h>
int main(){
    int m,n;
    printf ("enter the value m");
    scanf("%d",&m);
    if (m>0){
        n=1;
    }
    else if(m==0){
        n=0;
    }
    else if(m<0){
        n=-1;
    }
        printf("%d",n);
    return 0;
}
