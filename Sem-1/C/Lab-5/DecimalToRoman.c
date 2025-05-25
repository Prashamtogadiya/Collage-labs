// Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, 
//X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)

#include<stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        if (n>=1000)
        {
            printf("M");
            n-=1000;
        }
        else if (n>=900)
        {
            printf("CM");
            n-=900;
        }
        else if (n>=500)
        {
            printf("D");
            n-=500;
        }
        else if (n>=400)
        {
            printf("CD");
            n-=400;
        }
        else if (n>=100)
        {
            printf("C");
            n-=100;
        }
        else if (n>=90)
        {
            printf("XC");
            n-=90;
        }
        else if (n>=50)
        {
            printf("L");
            n-=50;
        }
        else if (n>=40)
        {
            printf("XL");
            n-=40;
        }
        else if (n>=10)
        {
            printf("X");
            n-=10;
        }
        else if (n>=9)
        {
            printf("IX");
            n-=9;
        }
        else if (n>=5)
        {
            printf("V");
            n-=5;
        }
        else if (n>=4)
        {
            printf("IV");
            n-=4;
        }
        else
        {
            printf("I");
            n-=1;
        }
    }
}