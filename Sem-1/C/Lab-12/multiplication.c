// Perform Multiplication of two matrices.

#include<stdio.h>
void main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of rows : ");
    scanf("%d",&n);

    int a[m][n],b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    int mul,sum=0;
    int c[m][n];  
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }   
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}