// Print number and its square root for 0 to 9.

#include<stdio.h>
#include<math.h>
void main(){
    int i;
    float ans;
    for (int i = 0; i < 10; i++)
    {
        ans=(float)sqrt(i);
        printf("sqrt(%d) = %f\n",i,ans);
    }
}