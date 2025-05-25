// Create structure student with name, percentage and age. Read data of 5 students using array of structur

#include<stdio.h>
#include<string.h>

struct Student
{
    char name[10];
    float per;
    int age;
};

void main(){
    struct Student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student[%d] : ",i+1);
        scanf("%s",s[i].name);
        printf("Enter percentage of student[%d] : ",i+1);
        scanf("%f",&s[i].per);
        printf("Enter age of student[%d] : ",i+1);
        scanf("%d",&s[i].age);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n----Student%d----\n",i+1);
        printf("Name : %s\n",s[i].name);
        printf("Percentage : %.2f\n",s[i].per);
        printf("Age : %d\n",s[i].age);
    }
    
}