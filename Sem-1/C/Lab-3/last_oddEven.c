//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
void main(){
    int n,lastNum;
    printf("Entr a number : ");
    scanf("%d",&n);
    
    lastNum = n%10;

    if (lastNum%2==0)
    {
        printf("Last number is %d. which is even",lastNum);
    }
    else
    {
        printf("Last number is %d. which is odd",lastNum);
    }
}
