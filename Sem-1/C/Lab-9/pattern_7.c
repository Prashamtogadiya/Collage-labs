#include<stdio.h>
void main(){
    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j < 5; j++)           // * * * * *
        {                                     //  * * * * 
            printf(" ");                      //   * * *
        }                                     //    * *
        for (int j = 0; j < i; j++)           //     * 
        {
            printf("* ");
        }
        printf("\n");
    }
}