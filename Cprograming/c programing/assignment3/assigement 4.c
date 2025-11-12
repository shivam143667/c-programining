#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the value a");
    scanf("%d",&a);
    printf("enter the value b");
    scanf("%d",&b);
    printf("enter the value c");
    scanf("%d",&c);
    if (a>b){
        printf("a");
    }
    else if(a<b){
        printf("b");
    }
    else if(b<c){
        printf("c");
    }
    else if(a==b ||b==c||c==a||b==a||c==b||a==c){
        printf("equal");
    }


    }

