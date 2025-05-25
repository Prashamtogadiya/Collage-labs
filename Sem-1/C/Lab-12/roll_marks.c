// Read and store the roll no and marks of 20 students using 2D array.

#include<stdio.h>
void main(){
    int n,m;
    printf("Enter number of students : ");
    scanf("%d",&n);

    int a[n][n];
    // scan roll no and marks
    printf("Enter Roll no. and marks\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Student %d : ",i+1);
            scanf("%d",&a[i][j]);
        }   
    }

    printf("Roll no.   Marks\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("   %2d    ",a[i][j]);
        }
        printf("\n");
    }
}