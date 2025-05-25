//  Find out sum of first and last digit of a given number.

#include<stdio.h>
void main(){
    int n,ans,a,b,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    b=n%10;
    while(n!=0)
    {
        a=n%10;
        n/=10;
    }
    ans=a+b;
    printf("%d + %d = %d",a,b,ans);
}