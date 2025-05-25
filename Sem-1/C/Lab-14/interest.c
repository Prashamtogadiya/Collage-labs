// Count simple interest using function.

#include<stdio.h>

float interest(float p, float r, float t){
    return p*r*t/100;
}

void main(){
    float p,r,t;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter interest rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);

    float ans = interest(p, r, t);
    printf("Interst = %f",ans);
}