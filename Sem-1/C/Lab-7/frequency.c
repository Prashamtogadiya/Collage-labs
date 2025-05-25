// Count frequency of digits in an integer

#include<stdio.h>
void main(){
    int n,rem,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=n;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    int freq[count];
    for (int i = 0; i <= count; i++)
    {
        freq[i]=0;
    }
    while (a!=0)
    {
        rem=a%10;
        a/=10;
        freq[rem]++;
    }
    for (int i = 0; i <= 15; i++)
    {
        printf("Frequency of %d = %d\n",i,freq[i]);
    }
}