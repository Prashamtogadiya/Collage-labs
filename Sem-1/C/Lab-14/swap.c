// Swap two numbers using call by value and call by reference.

#include<stdio.h>

void callByValue(int, int);
void callByRefrence(int*, int*);

void main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    
    printf("\nBefore swap\na : %d\nb : %d",a,b);
    
    callByValue(a,b);
    callByRefrence(&a,&b);
    // printf("\nAfter swap\na : %d\nb : %d",a,b);
}

void callByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap\na : %d\nb : %d",a,b);
}

void callByRefrence(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}