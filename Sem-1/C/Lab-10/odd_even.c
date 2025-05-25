// Count number of even or odd number from an array of n numbers.

#include<stdio.h>
void main(){
    int n,odd=0,even=0;
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
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of odd numbers : %d",odd);
    printf("\nNumber of even numbers : %d",even);
}