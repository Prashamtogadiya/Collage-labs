// Print all uppercase and lowercase alphabets.

#include<stdio.h>
void main(){
    char i=65;
    printf("Uppercase : ");
    while (i<=90)
    {
        printf("%c ",i);
        i++;
    }
    i=97;
    printf("\nLowercase : ");
    while (i<=122)
    {
        printf("%c ",i);
        i++;
    }
}