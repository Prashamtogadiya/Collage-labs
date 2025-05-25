#include<stdio.h>
void main(){
    for (int i = 1; i <= 5; i++)            // 1
    {                                       // 1 2
        for (int j = 1; j <= i; j++)        // 1 2 3
        {                                   // 1 2 3 4
            printf("%d ",j);                // 1 2 3 4 5
        }
        printf("\n");
    }
}