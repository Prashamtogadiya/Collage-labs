// Return the maximum of three floating-pofloatnumbers.

#include<stdio.h>

float max(float a, float b, float c){
    float x;
    x = (a>b)?((a>c)?a:c):((b>c)?b:c);
    return x;
}

void main(){
    float a,b,c;
    printf("Enter three number\n");
    scanf("%f %f %f",&a,&b,&c);
    float ans = max(a, b, c);
    printf("Max number is %f",ans);
}