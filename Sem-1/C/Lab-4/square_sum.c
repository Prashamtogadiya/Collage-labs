//  Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.

#include<stdio.h>
#include<math.h>
void main(){
    int n,ans=0;
    printf("Enter last number of 1 + 4 + 9 + ... n : ");
    start:
    scanf("%d",&n);
    for (int i = 1; i <= sqrt(n); i++)
    {
        ans+=(i*i);
        printf("%d + ",i*i);
    }
    printf("\b\b= %d",ans);
}