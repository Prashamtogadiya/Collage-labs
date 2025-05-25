// Find length of string using pointers

#include<stdio.h>
void main(){
    char s[10];
    int count=0,i=0;
    gets(s);
    char *p=&s[0];
    for (i = 0; *(p+i)!='\0'; i++)
    {
        count++;
    }
    printf("Lenhght of %s is %d",s,count);
}