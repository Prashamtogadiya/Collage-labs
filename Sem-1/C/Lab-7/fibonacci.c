//  Print the Fibonacci Series.
#include<stdio.h>
void main(){
    int n,t1=0,t2=1;
    int nextTerm = 1;
    printf("Enter number of total term : ");
    scanf("%d",&n);
    printf("0, 1, ");
    for (int i = 2; i < n; i++)
    {
        printf("%d, ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm = t2 + t1;
    }
}