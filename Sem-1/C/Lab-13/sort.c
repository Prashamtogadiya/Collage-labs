// Sort array using pointers.

#include<stdio.h>
void main(){
    int n;
    printf("Enter value of element : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("Before sort\n");
    printf("a : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
     // swap
    int *p=&a[0];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (*(p+i) > *(p+j))
            {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    printf("\nAfter sort\n");
    printf("a : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}