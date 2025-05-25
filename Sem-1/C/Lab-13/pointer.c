// Demonstrate int, float, double and char pointer.

#include<stdio.h>
void main(){
    int a=10,*i;
    i=&a;

    float b=4.2568,*f;
    f=&b;

    double c=3.11111111111111111111,*dou; 
    dou=&c;

    char d='A',*ch;
    ch=&d;

    printf("int : %d %d\n",i,*i);
    printf("float : %f %f\n",f,*f);
    printf("doublre : %lf %lf\n",dou,*dou);
    printf("character : %lu %c\n",ch,*ch);
}