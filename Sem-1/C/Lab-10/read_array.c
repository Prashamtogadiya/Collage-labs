// Read n numbers from user and print in normal and reverse order.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Normal order : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReverse order : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
}