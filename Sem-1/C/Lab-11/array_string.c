// Input a string in character array and print string and length of string.

#include<stdio.h>
void main(){
    char s[10],count=0;
    gets(s);
    printf("%s",s);
    for (int i = 0; s[i] < '\0'; i++)
    {
        count++;
    }
    printf("\nLenght of string : %d",count);
}