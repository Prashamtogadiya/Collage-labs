// Pass an array in function to print array elements

#include<stdio.h>
void array(int a[5]);

void main(){
    int a[5]={1,2,3,4,5};
    array(a);
}
void array(int a[5]){
    printf("a : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}