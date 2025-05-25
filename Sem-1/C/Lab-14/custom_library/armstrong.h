// armstrong number

#include<stdio.h>

void armstrong(int n){
    int a=n , b=n;
    int count=0, sqr=1, ans=0;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    while (a!=0)
    {
        int rem=a%10;
        sqr=1;
        for (int i = 0; i < count; i++)
        {
            sqr*=rem;
        }
        ans+=sqr;
        a/=10;
    }
    if (ans==b)
    {
        printf("%d is Armstrong number\n",b);
    }
    else{
        printf("%d is not Armstrong number\n",b);
    }
}