// Find all prime numbers between given interval using functions

#include<stdio.h>

void prime(int, int);

void main(){
    int n1,n2;
    printf("Starting number : ");
    scanf("%d",&n1);
    printf("Ending number : ");
    scanf("%d",&n2);

    prime(n1, n2);
}

void prime(int n1, int n2){
    int i,j;
    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j==i)
        {
            printf("%d is prime number\n",i);
        }
    }
}