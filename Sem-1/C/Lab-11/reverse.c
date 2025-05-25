// Reverse elements of an array without using second array.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);

    // scan array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    // reverse 
    for (int i = 0; i < (n-1)/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}