// Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter last number of 1 - 2 + 3 - 4 + ... n : ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
        else
        {
            sum-=i;
        }
    }
    printf("1 - 2 + 3 - 4 + 5 - 6 + 7 - ... %d = %d",n,sum);
}