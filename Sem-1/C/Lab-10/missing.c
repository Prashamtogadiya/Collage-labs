// Find missing numbers of sequence using array.

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

    // missing
    printf("array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nMisssing numbers : ");
    for (int i = 0; i < n-1; i++)
    {
        if ((a[i]+1)!=a[i+1])
        {
            printf("%d ",a[i]+1);
        }
    }
}