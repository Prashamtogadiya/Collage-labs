// Check whether the given number is Armstrong or not.

#include<stdio.h>
void main(){
    int n,i,rem,ans=0,count=0,sqr,a,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    a=n;
    b=n;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    while (a!=0)
    {
        rem=a%10;
        sqr=1;
        for ( i = 0; i < count; i++)
        {
            sqr*=rem;
        }
        ans+=sqr;
        a/=10;
    }
    if (ans==b)
    {
        printf("%d is Armstrong number.",b);
    }
    else{
        printf("%d is not Armstrong number.",b);
    }
}