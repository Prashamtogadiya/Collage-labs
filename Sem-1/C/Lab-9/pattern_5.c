#include<stdio.h>
void main(){
    int k=1;
    for (int i = 0; i < 5; i++)             // 1
    {                                       // 2 3
        for (int j = 0; j <= i; j++)        // 4 5 6
        {                                   // 7 8 9 10
            printf("%d ",k++);              // 11 12 13 14 15
        }
        printf("\n");
    }
}