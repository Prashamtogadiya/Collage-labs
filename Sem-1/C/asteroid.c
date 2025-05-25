/*  We are given an array asteroids of integers representing asteroids in a row.For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed. Find out the state of the  asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet. */

#include <stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter number of asteroids : ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));

    printf("Enter positions : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    
    int i = 0, count = 0;

    while (i < n - 1 - count)
    {
        if ((a[i] > 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] > 0))
        {
            if (a[i] < 0)
            {
                a[i] = 0 - a[i];
                if (a[i] < a[i + 1])
                {
                    for (int j = i; j < n - 1 - count; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    count++;
                }
                else if (a[i] == a[i+1])
                {
                    for (int j = i; j < n - 1 - count; j++)
                    {
                        a[j] = a[j+2];
                    }
                    count+=2;
                }
                else
                {
                    for (int j = i + 1; j < n - 1 - count; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    count++;
                    a[i] = 0 - a[i];
                }
            }
            else if (a[i + 1] < 0)
            {
                a[i + 1] = 0 - a[i + 1];
                if (a[i] < a[i + 1])
                {
                    for (int j = i; j < n - 1 - count; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    count++;
                    a[i] = 0 - a[i];
                }
                else if (a[i] == a[i+1])
                {
                    for (int j = i; j < n - 1 - count; j++)
                    {
                        a[j] = a[j+2];
                    }
                    count+=2;
                }
                else
                {
                    for (int j = i + 1; j < n - 1 - count; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    count++;
                }
            }
            i=0;
        }
        else
        {
            i++;
        }
    }

    printf("\nState of asteroids after collisions : ");
    for (int i = 0; i < n - count; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
}