// Copy all elements of one array to another.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);

    // scan array
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    // copy
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }

    printf("A : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nB : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
}