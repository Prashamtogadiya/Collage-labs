// perfect number 

#include<stdio.h>

void perfect(int n){
    int sum=0, rem, a=n;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
            n/=i;
        }
    }
    if (sum==n)
    {
        printf("%d is Perfect number\n",a);
    }
    else
    {
        printf("%d is not a Prefect number\n",a);
    }
}