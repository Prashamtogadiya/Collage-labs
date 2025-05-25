#include<stdio.h>
void main(){
    for (int i = 5; i >= 1; i--)            // 5
    {                                       // 5 4
        for (int j = 5; j >= i; j--)        // 5 4 3
        {                                   // 5 4 3 2
            printf("%d ",j);                // 5 4 3 2 1
        }
        printf("\n");
    }
}