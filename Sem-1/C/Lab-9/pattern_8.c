#include<stdio.h>
void main(){
    char x='A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            printf(" ");                       //      1
        }                                      //     A B
        for (int j = 1; j <= i; j++)           //    1 2 3 
        {                                      //   C D E F
            if (i%2!=0)                        //  1 2 3 4 5
            {
                printf("%d ",j);
            }
            else
            {
                printf("%c ",x++);
            }
        }
        printf("\n");
    }
}