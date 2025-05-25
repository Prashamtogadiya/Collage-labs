// Swap value of two numbers using pointer.

#include<stdio.h>
void main(){
    int a,b;
    int *p1=&a,*p2=&b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Before swap\n");
    printf("a : %d\nb : %d",*p1,*p2);
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
    printf("\nAfter swap\n");
    printf("a : %d\nb : %d",*p1,*p2);
}