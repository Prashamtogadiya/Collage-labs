// Demonstrate nested structure.

#include<stdio.h>

struct employee
{
    char name[10];
    struct birth
    {
        int d,m,y;
    };
    struct birth date;
};


void main(){
    struct employee e1;
    printf("Enetr employee name : ");
    scanf("%s",e1.name);
    printf("Enter birth date : ");
    scanf("%d",&e1.date.d);
    printf("Enter birth month : ");
    scanf("%d",&e1.date.m);
    printf("Enter birth year : ");
    scanf("%d",&e1.date.y);

    printf("\nName : %s",e1.name);
    printf("\nBirth date : %d/%d/%d",e1.date.d,e1.date.m,e1.date.y);
}