// Insert new value in the sorted array.

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

    int n1;
    printf("How many values you want to enter : ");
    scanf("%d",&n1);
    a[n+n1];

    printf("Enter new values : \n");
    for (int i = n; i < n+n1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("a : ");
    for (int i = 0; i < n+n1; i++)
    {
        printf("%d ",a[i]);
    }
}