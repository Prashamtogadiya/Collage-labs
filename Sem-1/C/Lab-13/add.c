// Add two matrix using pointers.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);

    // scan
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%d] : ",i);
        scanf("%d",&b[i]);
    }

    int *p1=&a[0], *p2=&b[0];
    // add
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] + b[%d] = %d + %d = %d",i,i,*(p1+i),*(p2+i),*(p1+i)+*(p2+i));
    }
}