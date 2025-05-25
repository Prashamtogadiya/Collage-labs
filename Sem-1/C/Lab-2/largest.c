// Find out largest number from given three numbers.

#include<stdio.h>
void main(){
    int a,b,c;
    printf("First number : ");
    scanf("%d",&a);
    printf("Second number : ");
    scanf("%d",&b);
    printf("Third number : ");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("Largest number is %d",a);
        }
        else
        {
            printf("Largest number is %d",c);
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("Largest number is %d",b);
        }
        else
        {
            printf("Largest number is %d",c);
        }
    }
    else   
    {
        if (c>b)
        {
            printf("Largest number is %d",c);
        }
        else
        {
            printf("Largest number is %d",b);
        }
    }
    
}