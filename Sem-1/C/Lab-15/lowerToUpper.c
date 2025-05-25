// Scan a character string passed as an argument and convert all lowercase string to uppercase string

#include<stdio.h>

void upperToLower(char s[10]);

void main(){
    char s[10];
    printf("Enter a string : ");
    gets(s);
    upperToLower(s);
}

void upperToLower(char s[10]){
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>96)
        {
            s[i]=s[i]-32;
        }
    }
    printf(s);
}