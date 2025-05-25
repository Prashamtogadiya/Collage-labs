#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,t,k,r,c,s,l,m;
    char p;

        start:

        printf("\n[1] Diamond\n[2] Triangles\n[3] Square\n\n[4] Reenter\n[5] Exit\n");

        printf("\nEnter your favourite shape : ");
        again:
        scanf("%d",&i);

        switch (i)
        {
        case 1: //  start of diamond
            printf("\n[1] Normal diamond\n[2] Hollow diamond\n");
            printf("\nEnter your preffered type : ");
            scanf("%d",&i);

            printf("\nEnter a sign : ");
            scanf("%c",&p);
            p=getchar();

            printf("\nEnetr number of Diamond : ");
            scanf("%d",&t);

            odd:
            printf("\nEnter numebr of row(noly odd number) : ");
            scanf("%d",&r);
            if (r%2==0)
            {
                printf("\nPlease enter only odd number\n");
                goto odd;
            }

            switch (i)
            {
            case 1: // start of normal diamond
                for ( i = 0; i < t; i++)
                {
                    for ( j = 0; j <= r/2+1; j++) // start of first triangle
                    {
                        for ( k = r/2+1; k > j; k--) // Blank part
                        {
                            printf(" ");
                        }
                        for ( l = 0; l < j; l++) // printing part 
                        {
                        printf("%c ",p);
                        }
                        printf("\n");    
                    } // end of first triangle
                    for ( j = r/2-1; j >= 0; j--) // starting of second triangle
                    {
                        for ( k = j; k < r/2; k++)
                        {
                            printf(" ");
                        }
                        for ( l = j; l >= 0; l--)
                        {
                            printf("%c ",p);
                        }
                        printf("\n");
                    } // end of second triangle
                    printf("\t");
                } // end of whole diamond
            break; // end of normal diamond

            case 2: // start of hollow diamond
                for ( i = 0; i < t; i++)
                {   // start of first part
                    for ( j = 0; j < r/2+1; j++)
                    { 
                        for ( k = r/2+1; k > j; k--)
                        {
                            printf(" ");
                        }
                        printf("%c ",p);
                        for ( k = 1; k < j; k++)
                        {
                            printf("  ");
                        }
                        if (j==0)
                        {
                            printf("\n");
                        }
                        else
                        {
                            printf("%c ",p);
                            printf("\n");
                        }
                    } // end of first part
                    
                    for ( j = r/2; j > 0; j--)
                    {
                        printf(" ");
                        for ( k = j; k <= r/2 ; k++)
                        {
                            printf(" ");
                        }
                        printf("%c ",p);
                        for ( k = 0; k < j-2; k++)
                        {
                            printf("  ");
                        }
                        if (j!=1)
                        {
                            printf("%c ",p);
                        }
                        printf("\n");
                    } // end of second part
                    printf("\n");
                }
                break;// end of hollow diamond
            } // end of diamond switch
            break; // end of diamond

        case 2: // start of triangle
            printf("\n[1] Normal\n[2] Reversed\n[3] Hollow(normal)\n[4] Hollow(reversed)\n");
            printf("\nEnter your favoured type of triangle : ");
            scanf("%d",&i);

            printf("\nEnter a sign : ");
            scanf("%c",&p);
            p=getchar();

            printf("\nEnter number of triangles : ");
            scanf("%d",&t);

            printf("\nEnter number of rows : ");
            scanf("%d",&r);

            switch (i)
            {
            case 1: // normal triangle starts
                for ( i = 0; i < t; i++)   // number of triangles
                {
                    for ( j = 0; j < r; j++) // number of rows
                    {
                        for ( k = r; k > j; k--) // Blank part
                        {
                            printf(" ");
                        }
                        for ( l = 0; l <= j; l++) // sign part 
                        {
                            printf("%c ",p);
                        }
                        printf("\n");
                    }// end of rows
                    printf("\n");
                }// end of normal triangle
                break;

            case 2: // start of revresed triangle
                for ( i = 0; i < t; i++) // start of number of triangles
                {
                    for ( j = r; j >= 0; j--) // start of number of rows
                    {
                        for ( k = j; k < r; k++)
                        {
                            printf(" ");
                        }
                        for ( k = j; k > 0; k--)
                        {
                            printf("%c ",p);
                        }
                        printf("\n");
                    } //  end of number of rows
                    printf("\n");
                } //  end of reversed triangle
                break;

            case 3: //  start of hollow(normal) triangle
                for ( i = 0; i < t; i++)
                {
                    for ( j = 1; j < r; j++)
                    {
                        for ( k = r; k > j; k--) // Blank part
                        {
                            printf(" ");
                        }
                        for ( l = 0; l < j; l++) // sign part 
                        {
                            if (l==0 || l==j-1)
                            {
                                printf("%c ",p);
                            }
                            else
                            {
                                for ( l = 0; l < j-2; l++)
                                {
                                    printf("  ");
                                }
                            }
                            if (l==r-2) // start of last line
                            {
                                printf("\n");
                                for ( k = 0; k < r; k++)
                                {
                                    printf("%c ",p);
                                }
                            } // end of last line
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                break;// end of hollow(normaml) triangle

            case 4: //  start of hollow(reverse) triangle
                for ( i = 0; i < t; i++)
                {
                    for ( j = r; j > 0; j--)
                    {
                        if (j==r)
                        {
                            for ( k = 0; k < r; k++)
                            {
                                printf("%c ",p);
                            }
                        }
                        else
                        {
                            for ( k = j; k < r; k++)
                            {
                                printf(" ");
                            }
                            printf("%c ",p);
                            for ( k = 0; k < j-2; k++)
                            {
                                printf("  ");
                            }
                            if (j!=1)
                            {
                                printf("%c ",p);
                            }
                        }
                        printf("\n");
                    }
                    printf("\n");               
                }
                break; // end of hollow(reverse) triangle

            default:
                printf("\nEnter a valid choice\n");
                break;
            }// triangle switch end
            break;

        case 3: // start of quadrilateral

            printf("[1] Holllow\n[2] With diagonal\n");
            printf("\nEnter your preference : ");
            scanf("%d",&i);

            printf("\nEnter a sign : ");
            scanf("%c",&p);
            p=getchar();

            printf("\nEnter number of quadrilateral : ");
            scanf("%d",&s);

            printf("\nEnter number of rows : ");
            scanf("%d",&r);

            printf("\nEnter number of colums : ");
            scanf("%d",&c);

            switch (i)
            {
            case 1:
                for ( i = 0; i < s; i++) // start of hollow quadeilatrral
                {
                    for ( j = 0; j < r; j++) // printing row
                    {
                        if (j==0 || j==r-1) // printing first and last line
                        {
                            for ( k = 0; k < c; k++)
                            {
                                printf("%c ",p);
                            }
                            printf("\n");
                        } // end of first and last line
                        else // printing center part
                        {
                            for ( k = 1; k <= c; k++)
                            {
                                if (k==1 || k==c)
                                {
                                    printf("%c ",p);
                                }
                                else
                                {
                                    printf("  ");
                                }
                            }
                            printf("\n");
                        } // end of else
                        printf("\n");
                    } // end of row
                    printf("\n");
                } 
                break; // end of hollow quadeilatrral

                default:
                printf("\nEnter a valid choice\n");
                    break;
            } // end of quadrilateral switch
            break; // end of quadrilateral

        
        case 4:
            printf("\nEnter your favourite shape again : ");
            goto again;
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\nEnter a valid choice\n");
            goto start;
            break;

        } // end of pattern switch 

        printf("\n[1] Continue...\n[2] Exit\n");

        printf("\nEnter your preferred choice : ");
        CE:
        scanf("%d",&i);

        switch (i)
        {
        case 1:
            goto start;
            break;
        
        case 2:
            exit(0);
            break;

        default:
            printf("\nPlease enter a valid preference : ");
            goto CE;
        }
} // end of main
 