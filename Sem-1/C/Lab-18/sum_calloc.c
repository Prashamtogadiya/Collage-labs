// Calculate the sum of n numbers entered by the user using calloc()

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *num, n, sum = 0;
    printf("Enter total numbers : ");
    scanf("%d", &n);

    num = (int *)calloc(n, sizeof(int));
    printf("Enter numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (num + i));
        sum += num[i];
    }
    printf("sum = %d", sum);

    free(num);
}