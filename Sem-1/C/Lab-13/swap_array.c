// Swap two arrays using pointers.

#include<stdio.h>
void main(){
    int n,m;
    printf("Enter number of element for a : ");
    scanf("%d",&n);
    printf("Enter number of element for b : ");
    scanf("%d",&m);

    // scan
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("b[%d] : ",i);
        scanf("%d",&b[i]);
    }

    int *p1=&a[0], *p2=&b[0];

    // printf before swap
    printf("Before swap\n");
    printf("a : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\nb : ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ",*(p2+i));
    }

    // swap
    a[m],b[n];
    for (int i = 0; (i<m && i<n); i++)
    {
        int temp = *(p1+i);
        *(p1+i) = *(p2+i);
        *(p2+i) = temp;
    }
    if (n>m)
    {
        for (int i = 0; i < n; i++)
        {
            *(p2+i)=*(p1+i);
        }   
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            *(p1+i)=*(p2+i);
        }   
    }
    
    // printf after swap
    printf("\nAfter swap\n");
    printf("a : ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\nb : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p2+i));
    }
    
}