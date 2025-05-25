// Check whether the given number is palindrome or not.

#include<stdio.h>
void main(){
    int n,rem,sum=0,num;
    printf("Enter a number : ");
    scanf("%d",&n);
    num=n;
    while (n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }
    if (sum==num)
    {
        printf("%d is palindrome number.",num);
    }
    else{
        printf("%d is not palindrome numbre.",num);
    }
}