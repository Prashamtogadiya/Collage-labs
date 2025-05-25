// Find the second largest number among three user input numbers.

#include<stdio.h>
void mian(){
    int a,b,c;
    printf("Enter three numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c))
    {
        if (b>c)
        {
            printf("%d is second largest",b);
        }
        else
        {
            printf("%d is second largest",c);
        }
    }
    else if ((b>c) && (b>a))
    {
        if (a>c)
        {
            printf("%d is second largest",a);
        }
        else{
            printf("%d is second largest",c);
        }
    }
    else
    {
        if (a>b)
        {
            printf("%d is second largest",a);
        }
        else
        {
            printf("%d is second largest",b);
        }
    }
}