// Delete all duplicate elements from an array.

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

    // delete duplicate elements
    int count=0;
    for (int i = 0; i < n-1-count; i++)
    {
        for (int j = i+1; j < n-count; j++)
        {
            if (a[i]==a[j])
            {
                for (int k = j; k < n-1; k++)
                {
                    a[k]=a[k+1];
                }
                count++;
            }
        }
    }
    printf("count : %d\n",count);
    for (int i = 0; i < n-count; i++)
    {   
        printf("%d ",a[i]);
    }
}