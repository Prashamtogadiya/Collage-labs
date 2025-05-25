//  Get 10 numbers from user print count of odd, even numbers.

#include<stdio.h>
void main(){
    int n,odd=0,even=0;
    printf("Enter 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers : %d\nOdd numbers : %d",even,odd);
}