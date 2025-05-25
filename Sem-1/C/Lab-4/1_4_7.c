//  Print first 50 numbers in series 1, 4, 7, 10…

#include<stdio.h>
void main(){
    int ans=1;
    for (int i = 1; i <= 50; i++)
    {
        printf("%d, ",ans);
        ans+=3;
    }
}