#include<stdio.h>
void main(){
    for (int i = 1; i <= 5; i++)            // 1
    {                                       // 2 2
        for (int j = 1; j <= i; j++)        // 3 3 3
        {                                   // 4 4 4 4
            printf("%d ",i);                // 5 5 5 5 5
        }
        printf("\n");
    }
}