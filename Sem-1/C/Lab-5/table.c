//  Print multiplication table of a given number

#include<stdio.h>
void main(){
    int n,i=1,ans;
    printf("Table you want : ");
    scanf("%d",&n);
    while (i<=10)
    {
        ans=n*i;
        printf("%d x %d = %d\n",n,i,ans);
        i++;
    }
}