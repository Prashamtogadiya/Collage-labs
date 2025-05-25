// Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {printf("(");
        for (int j = 0; j <= i; j++)
        {
            sum+=j;
            printf("%d + ",j);
        }
    printf(") + ");
    }
    printf(" = %d",sum); 
}