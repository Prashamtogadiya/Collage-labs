// find the value of mathematical constant e
#include<stdio.h>
void main(){
    float ans=1,div,mul=1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            mul*=j;
        }
        div=(float)(1/mul);
        ans+=div;
    }
    printf("e = %f",ans);
}