// Check a given matrix is a sparse matrix or not.

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
    int count=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
        }
    }
    if (count>(m*n/2))
    {
        printf("This matrix is a sparce matrix\nbecause no. of zero element = %d \n\tno. of non-zero element = %d",count,m*n-count);
    }
    else{
        printf("This matrix is not a sparce matrix\nbecause no. of zero element = %d \n\tno. of non-zero element = %d",count,m*n-count);
    }
}