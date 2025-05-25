// Print digits of given number.

#include<stdio.h>
void main(){
    int n,ans;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Digits : ");
    while (n!=0)
    {
        ans=n%10;
        n/=10;
        printf("%d, ",ans);
    }
}