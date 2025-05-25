#include<stdio.h>
void main(){
    int i,j;
    for (i = 1; i < 5; i++)
    {
        for (j = i; j < 5 ; j++)          //     1
        {                                     //    1 2 
            printf("  ");                     //   1 2 3
        }                                     //  1 2 3 4
        for (j = 1; j <= 2*i-1; j++)      // 1 2 3 4 5
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}