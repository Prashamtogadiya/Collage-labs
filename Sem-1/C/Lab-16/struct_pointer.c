// Demonstrate structure pointer.

#include<stdio.h>

struct Student  
{
    char name[10];
    int roll_no;
    char div;
};

struct Student s[3],*ptr;

void main(){
    ptr = &s[0];
    for (int i = 0; i < 3; i++)
    {
        printf("\n\nEnter name of student[%d] : ",i+1);
        scanf("%s",(ptr+i)->name);
        printf("Enter Roll.No of student[%d] : ",i+1);
        scanf("%d",&(ptr+i)->roll_no);
        printf("Enter Div of student[%d] : ",i+1);
        scanf("%c ",&(ptr+i)->div);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n----Student%d----\n",i+1);
        printf("Name : %s\n",(ptr+i)->name);
        printf("Roll.No : %d\n",(ptr+i)->roll_no);
        printf("Div : %c",(ptr+i)->div);
    }
}