// Check whether the entered character is upper case, lower case, digit or any special character.

#include<stdio.h>
void main(){
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    if ((a>='A') && (a<='Z'))
    {
        printf("You entered upper case character");
    }
    else if ((a>='a') && (a<='z'))
    {
        printf("You entered lower case character");
    }
    else if ((a>='0') && (a<='9'))
    {
        printf("You entered number");
    }
    else
    {
        printf("You entered special character");
    }
}