// Find factorial of a number using function and recursive function

#include<stdio.h>

int fact(int);

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ans = fact(n);
    printf("%d! = %d",n,ans);
}

int fact(int n){
    if (n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}