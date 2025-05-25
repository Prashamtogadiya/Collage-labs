// . Swap elements of two integer arrays using user define function

#include<stdio.h>

void swap(int a[5], int b[5]);

void main(){
    int n,a[5],b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("b[%d] : ",i);
        scanf("%d",&b[i]);
    }
    printf("\n----Before swap----\n");
    printf("a : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nb : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    swap(a, b);
}

void swap(int a[5], int b[5]){
    for (int i = 0; i < 5; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("\n\n----After swap----\n");
    printf("a : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nb : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
}

