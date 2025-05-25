//  Print all ASCII character with their values.

#include<stdio.h>
void main(){
    char A=65,a=97;
    printf("Capital alphabate : ");
    for (char i = A; i <= 90; i++)
    {
        printf("%c ",i);
    }
    printf("\nSmall alphabate   : ");
    for (char i = a; i <= 122; i++)
    {
        printf("%c ",i);
    }
}