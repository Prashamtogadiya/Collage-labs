// Create a function that converts amount into words

#include<stdio.h>

void swapNumber(int);

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    swapNumber(n);
}

void swapNumber(int n){
    int lastDigit, reverseNumber=0;
    while (n!=0)
    {
        lastDigit = n%10;
        n/=10;
        reverseNumber = reverseNumber*10+lastDigit;
    }
    while (reverseNumber!=0)
    {
        int ans = reverseNumber % 10;
        reverseNumber/=10;
        switch (ans)
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