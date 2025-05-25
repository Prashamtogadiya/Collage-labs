//  Read a matrix and print diagonal elements and its sum.

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
    int sum=0;
    printf("Diagonal elements : ");
    for (int i = 0; i < m; i++)
    {
        sum+=a[i][i];
        printf("%d ",a[i][i]);
    }
    printf("\nSum of diagonal elements : %d",sum);
}