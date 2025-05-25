// Find whether the given number is prime or not.

#include<stdio.h>
void main(){
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("%d is not prime",n);
            break;
        }
    }
    if(i==n){
        printf("%d is prime number",n);
    }
}