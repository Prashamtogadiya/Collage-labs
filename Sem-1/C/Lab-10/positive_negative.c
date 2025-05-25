// Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main(){
    int n,positive=0,negative=0;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("Number of positive numbers : %d",positive);
    printf("\nNumber of negative numbers : %d",negative);
}