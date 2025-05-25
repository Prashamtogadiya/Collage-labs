// Find Max, Min, Sum, Avg. of given numbers from an array.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0],sum=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        if (a[i]>max)
        {
            max=a[i];
        }
        sum+=a[i];
    }
    float avg;
    avg=(float)(sum/n);
    printf("Min : %d\nMax : %d\nSum : %d\navg : %f",min,max,sum,avg);
}