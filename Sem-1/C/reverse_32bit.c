/*  Given a signed 32-bit integer x, return x with its digits reversed. 
    If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
    Assume the environment does not allow you to store 64-bit integers (signed or unsigned)
*/

#include<stdio.h>

int reverse(int);

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rev = reverse(n);
    printf("%d",rev);
}

int reverse(int n){
    int revNum;
    for (int i = 0; n!=0; i++)
    {
        revNum = revNum*10 + (n%10);
        n/=10;
    }
    if (revNum>-232 && revNum<231)
    {
        return revNum;
    }
    return 0;
}