//  Print sum of 1 to n numbers.

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
        printf("%d + ",i);
    }
    printf("\b\b= %d",sum);
}