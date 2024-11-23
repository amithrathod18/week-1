#include<stdio.h>
int main(){
    int a,b,t;
    printf("enter a first number");
    scanf("%d",&a);
    printf("enter a second number");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;

    
    printf("enter a,b after swapping %d %d",a,b);
    return 0;

}