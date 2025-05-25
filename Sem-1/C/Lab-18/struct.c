//  Allocate dynamic memory for structure variable

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

void main()
{
    struct student *ptr;

    ptr = (struct student *)malloc(sizeof(struct student));

    printf("Enter the name of the student: ");
    scanf("%s", ptr->name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &(ptr->roll));
    printf("Enter the marks of the student: ");
    scanf("%f", &(ptr->marks));

    printf("\nThe name of the student is %s.\n", ptr->name);
    printf("The roll number of the student is %d.\n", ptr->roll);
    printf("The marks of the student are %.2f.\n", ptr->marks);

    free(ptr);
}
