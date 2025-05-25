//  Check whether the given number is odd or even using bitwise operator.

#include<stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if ((n&1)==0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
}