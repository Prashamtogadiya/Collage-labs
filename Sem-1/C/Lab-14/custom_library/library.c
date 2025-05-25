// Check whether a number is prime, Armstrong or perfect number using functions. (create custom library)

#include<stdio.h>
#include"prime.h"
#include"armstrong.h"
#include"perfect.h"

void main(){
    int n;
    printf("Enter a number to find prime number : ");
    scanf("%d",&n);
    prime(n);

    printf("\nEnetr a number to find armstrong number : ");
    scanf("%d",&n);
    armstrong(n);

    printf("\nEnetr a number to find perfect numebr : ");
    scanf("%d",&n);
    perfect(n);
}