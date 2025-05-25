// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include<stdio.h>
void main(){
    int choice,n1,n2,ans;
    printf("[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    printf("\nEnter first number : ");
    scanf("%d",&n1);
    printf("Enter secind number : ");
    scanf("%d",&n2);

    if (choice==1)
    {
        ans=n1+n2;
        printf("%d + %d = %d",n1,n2,ans);
    }
    else if (choice==2)
    {
        ans=n1-n2;
        printf("%d - %d = %d",n1,n2,ans);
    }
    else if (choice==3)
    {
        ans=n1*n2;
        printf("%d * %d = %d",n1,n2,ans);
    }
    else{
        ans=n1/n2;
        printf("%d / %D = %d");
    }
}