// Check whether the given number is perfect or not.

#include<stdio.h>
void main(){
    int n,ans=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            n/=i;
        }
        ans+=i;
    }
    if (ans==n)
    {
        printf("Entered is perfect",n);
    }
    else
    {
        printf("Entered is not perfect",n);
    }
}