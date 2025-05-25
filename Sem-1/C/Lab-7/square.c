// Calculate 𝑥^𝑦 without using power function and without using multiplication.

#include<stdio.h>
void main(){
    int x,y;
    printf("Enter value of base : ");
    scanf("%d",&x);
    printf("Enter value of power : ");
    scanf("%d",&y);
    int ans=x, increment=x;

    for (int i = 1; i < x; i++)
    {
        for (int i = 1; i < y; i++)
        {
            ans+=increment;
        }
        increment = ans;
    }
    printf("%d^%d = %d",x,y,ans);
}