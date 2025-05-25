// prime number 

#include<stdio.h>

void prime(int n){
    int i;
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("%d is not Prime\n",n);
            break;
        }
    }
    if(i==n){
        printf("%d is Prime number\n",n);
    }
}