//  Demonstrate difference between structure and union.

#include<stdio.h>

struct structure
{
    int a;
    char c;
    float f;
};
union unin
{
    int a;
    char c;
    float f;
};


void main(){
    struct structure s = {1,'c',1.34};
    union unin u = {1,'c',1.34};
    u.a=1; u.c='j', u.f=1.24;

    printf("----Structure----\n");
    printf("\nsize : %d",sizeof(s));
    printf("\nint a = %d",s.a);
    printf("\nchar c = %c",s.c);
    printf("\nflaot f = %f",s.f);

    printf("\n\n----Union----\n");
    printf("\nsize : %d",sizeof(u));
    printf("\nint a = %d",u.a);
    printf("\nchar c = %c",u.c);
    printf("\nflaot f = %f",u.f);
}