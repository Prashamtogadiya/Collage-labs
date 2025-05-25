#include<stdio.h>
void main(){
    for (int i = 5; i > 0; i--)             // 1 2 3 4 5
    {                                       // 1 2 3 4
        for (int j = 1; j <= i; j++)        // 1 2 3
        {                                   // 1 2
            printf("%d ",j);                // 1
        }
        printf("\n");
    }
}