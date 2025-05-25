// Find reverse of any number using recursion

#include<stdio.h>

int reverse(int);

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ans = reverse(n);
    printf("Reverse number : %d",ans);
}

int reverse(int n){
    if (n==0)
    {
        return 0;
    }
    int rem = n%10;
    return rem*10+reverse(n/10); 
}