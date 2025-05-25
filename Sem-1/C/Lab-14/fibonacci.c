// Generate Fibonacci series of N given number using function name fibbo()

#include<stdio.h>

void fibbo(int);

void main(){
    int n;
    printf("Enetr total numer of terms : ");
    scanf("%d",&n);
    printf("0 1 ");
    fibbo(n);
}

void fibbo(int n){
    int t1 = 0, t2 = 1, nextTerm=1;
    for (int i = 0; i < n-2; i++)
    {
        printf("%d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm = t2 + t1;
        return nextTerm;
    }
}