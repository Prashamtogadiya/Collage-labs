// Sort elements of an array in an ascending order.

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

    printf("Before sort : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

    // sorting
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         if (a[j]>a[j+1])
    //         {
    //             int temp = a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // }

    printf("\nAfter sort : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}