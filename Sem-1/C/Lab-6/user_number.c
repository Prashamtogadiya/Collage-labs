//  Find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>
void main(){
    int n,num,sum=0,count=0;
    float avg;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        sum+=num;
        count++;
    }
    avg=(float)(sum/count);
    printf("Sum : %d\nAverage : %f",sum,avg);
}