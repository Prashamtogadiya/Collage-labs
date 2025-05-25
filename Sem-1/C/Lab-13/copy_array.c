// Copy one array to another using pointers.

#include<stdio.h>
void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);

    int a[n],b[n];
    int *p1=&a[0], *p2=&b[0];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        *(p2+i)=*(p1+i);
    }
    printf("a : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",*(p1+i));
    }
    printf("\nb : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",*(p2+i));
    }
    
}