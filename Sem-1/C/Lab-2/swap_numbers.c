// swaping two numbers

#include<stdio.h>
void main(){
    int a,b;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na : %d\n",a);
    printf("b : %d",b);
}