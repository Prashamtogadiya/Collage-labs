// Find power of any number using recursion

#include<stdio.h>

int powr(int, int);

void main(){
    int a,b;
    printf("Enter base value : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);

    int ans = powr(a,b);
    printf("%d^%d = %d",a,b,ans);
}

int powr(int a, int b){
    if (b==0)
    {
        return 1;
    }
    return a*powr(a,b-1);
}