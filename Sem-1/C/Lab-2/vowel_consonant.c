// Check whether given character is vowel or consonant. 

#include<stdio.h>
void mian(){
    char a;
    printf("Enter any alphabate : ");
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("You entered vowel");
    }
    else
    {
        printf("You entered consonant");
    }
}