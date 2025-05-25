// Convert decimal number to binary.

#include<stdio.h>
void main(){
    int n,ans,ans1=0,ans2;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("binary : ");
    while (n!=0)
    {
        ans=n%2;
        n/=2;
        ans1=(ans1*10)+ans;
    }
    printf("%d",ans1);
}