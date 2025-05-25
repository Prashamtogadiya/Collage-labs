//  Print Transpose of a matrix.

#include<stdio.h>
void main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int a[10][10];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n---Normal---\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int temp[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j]=a[j][i];
        }
    }
    printf("\n---Tranpose---\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
    
}