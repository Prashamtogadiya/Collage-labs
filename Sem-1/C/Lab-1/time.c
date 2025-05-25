// Calculating time on the bases of second

#include<stdio.h>
void main(){
    int s,m,h;
    printf("Enter second : ");
    scanf("%d",&s);
    h = s/3600;
    m = (s-(h*3600))/60;
    s = s - (m*60);
    printf("Time : %02d:%02d:%02d",h,m,s);
}