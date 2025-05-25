// Swap first and last digits of a number.

#include<stdio.h>

void main()
{
    int n,lastDigit,firstDigit,firstDigit,term=0;
    printf("enter value:");
    scanf("%d",&n);
    int x=n;
    
    lastDigit=n%10;
    while (n!=0)
    {
        firstDigit=n%10;
        n=n/10;
        term=term+1;
    }
    for (int i = 1; i < term; i++)
    {
        lastDigit*=10;
    }        

    int ans,mid=0,rem1,e=1,d=10;
    x=x/10;
    term=term-2;
    for (int i = 0; i < term; i++)
    {
        rem1=x%10;
        x=x/10;
        e=e*d;
        mid+=rem1*e;
    }
    ans=firstDigit+mid+lastDigit;
    printf("%d",ans);
}