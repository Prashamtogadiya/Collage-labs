//  Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5.

#include<stdio.h>
void main(){
    printf("All integer between 100 - 200 that are divisible by 7 but not divisible by 5 : ");
    for (int i = 100; i <= 200; i++)
    {
        if ((i%7==0)&&(1%5!=0))
        {
            printf("%d ",i);
        }
    }
}