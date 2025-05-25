// Perform Addition of two matrices

#include<stdio.h>
void main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);

    // scan array
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    int b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
}