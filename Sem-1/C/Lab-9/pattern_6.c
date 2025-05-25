#include<stdio.h>
void main(){
    for (int i = 0; i < 5; i++)             // 1
    {                                       // 0 1
        for (int j = 0; j <= i; j++)        // 1 0 1
        {                                   // 0 1 0 1
            if ((i+j)%2==0)                 // 1 0 1 0 1
            {
                printf("1 ");
            }   
            else
            {
                printf("0 ");
            }               
        }
        printf("\n");
    }
}