// Find a character from given string

#include<stdio.h>
#include<string.h>
void main(){
    char a[5],c;
    printf("Enter a string : ");
    gets(a);
    printf("Enetr a characetr : ");
    scanf("%c",&c);
    int count=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==c)
        {
            printf("%c is in string %s",c,a);
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("%c is not in string %s",c,a);
    }    
}