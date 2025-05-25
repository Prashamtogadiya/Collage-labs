// Convert given number in words.

#include<stdio.h>
void main(){
    int n,ans,ans1=0,ans2;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        ans=n%10;
        ans1=(ans1*10)+ans;
        n/=10;
    }
    while (ans1!=0)
    {
        ans2=ans1%10;
        ans1/=10;
        switch (ans2)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        default:
            printf("Nine ");
            break;
        }
    }
    
}