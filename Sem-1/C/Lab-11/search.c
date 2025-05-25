// Search element in array.

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

    // search
    printf("Enter element you want to search : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==n)
        {
            printf("element is at index %d\n",i);
        }
    }
}