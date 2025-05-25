// Store n elements in an array and print the elements using pointer.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int a[n];
    int *p=&a[0];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("a : "); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    
}