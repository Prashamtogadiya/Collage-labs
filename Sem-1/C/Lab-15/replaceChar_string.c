// Replace a character in given string.

#include<stdio.h>
#include<string.h>

void main(){
    char s[10],c1,c2;
    printf("Enter a string : ");
    scanf("%s",s);
    printf("Character you want to replace : ");
    scanf("%c ",&c1);
    printf("New character : ");
    scanf("%c ",&c2);

    printf("\nNew string : ");
    for (int i = 0; s[i]!='\0'; i++)
    {
        printf("%s",s[i]);
    }
}