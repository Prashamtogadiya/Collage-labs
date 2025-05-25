#include<stdio.h>
void main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 4; j++)           //     *
        {                                     //    * * 
            printf(" ");                      //   * * *
        }                                     //  * * * *
        for (int j = 0; j <= i; j++)          // * * * * *
        {
            printf("* ");
        }
        printf("\n");
    }
}