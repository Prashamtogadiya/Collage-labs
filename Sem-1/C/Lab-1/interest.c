// Claculating simple interest 

#include<stdio.h>
void main(){
    int p;
    float r,d,i;
    printf("Enter principal amount : ");
    scanf("%d",&p);
    printf("Enter duration (in year) : ");
    scanf("%f",&d);
    printf("Enter rate : ");
    scanf("%f",&r);

    i=(p*d*r)/100;

    printf("Interest after %.0f year is %0.2f",d,i);
}