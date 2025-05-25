// Find two largest elements in a one dimensional array.

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

    // two largest
    int max1=a[1],max2=a[1];
    for (int i = 1; i < n; i++)
    {
        if (a[i]>max1)
        {
            max1=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i]>max2) && (a[i]<max1))
        {
            max2=a[i];
        }
    }
    
    printf("First max : %d\nSecond max : %d",max1,max2);
}