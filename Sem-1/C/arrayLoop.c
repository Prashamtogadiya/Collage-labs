/* 
    Author : MOrad Jevin
    DOC : 14/6/2023
    subject : loop - array
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

# define ROW 3         // to change 1D size change ROW
# define COL 3

void main()
{
    int a,b,c,i,j,k,r,t,key,n,l; // Loops
    int d[ROW],e[ROW],f[ROW],g[ROW][COL],h[ROW][COL],m[ROW][COL],y[9],o=0;
    int min=0,max=ROW-1,mid,index=-1;
    
    start_1:
    printf(" [1] Loop\n [2] Array\n [3] Exit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&a);
    printf("\n");

    start_2:
    switch (a)
    {
    case 1: // Loops start
        printf(" [1] For loop\n [2] While loop\n [3] Do while loop\n [4] Exit\n");
        printf("\n Enter your choice : ");
        a=0;
        scanf("%d",&a);
        printf("\n");

        switch (a)  // loop switch starts.
        {
        case 1: // for loop case start
            printf(" [1] Vertical triangle\n [2] Horizontal triangle\n");
            printf("\nEnter your choice : ");
            a=0;
            scanf("%d",&a);
            printf("\n");

            switch (a) // V-H switch start
            {
            case 1:  // vertical case start

                printf("Enter number of triangles : ");
                scanf("%d",&t);
                printf("Enter number of rows : ");
                scanf("%d",&r);

                printf("\n [1] Normal triangle\n [2] Reversed triangle\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a) // N-R switch starts
                {
                case 1: // normal triangle 
                    for ( i = 0; i < t; i++) // num of tri
                    {
                        for ( j = 0; j < r; j++)  // num of row
                        {
                            for ( k = 0; k <= j; k++) // num of col
                            {
                                printf("*");
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    break;// normal triangle end

                case 2: // reversed triangle
                    for ( i = t; i > 0; i--)  // num of tri
                    {
                        for ( j = r; j > 0; j--)  // num of row
                        {
                            for ( k = j; k > 0; k--)  // num of col
                            {
                                printf("*");
                            }
                            printf("\n");
                        }
                        printf("\n");
                    }
                    break;// reversed triangle end
                } // N-R switch end
                break; //  vertical case end

            case 2: // horizontal case start

                printf("\n [1] Normal triangle.\n [2] Reversed triangle.\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a) // N-V switch start
                {
                case 1: // normal tri start
                    for ( i = 0; i < 3; i++)
                    {
                        for ( j = 0; j < i; j++)
                        {
                            printf("*");
                        }
                        printf("\t");
                        for ( j = 0; j < i; j++)
                        {
                            printf("*");
                        }
                        printf("\t");
                        for ( j = 0; j < i; j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;// normal tri end

                case 2: //  reverse tri start
                    for ( i = 3; i > 0; i--)
                    {
                        for ( j = i; j > 0; j--)
                        {
                            printf("*");
                        }
                        printf("\t");
                        for ( j = i; j > 0; j--)
                        {
                            printf("*");
                        }
                        printf("\t");
                        for ( j = i; j > 0; j--)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;// reverse tri end
                } //  N-R switch end
                break;// horizontal case end
            }// V-H switch end
            break; // for loop end

        case 2:// while loop start

            printf(" [1] Vertical triangle.\n [2] Horizontal triangle.\n");
            printf("\nEnter your choice : ");
            a=0;
            scanf("%d",&a);
            printf("\n");

            switch (a)
            {
            case 1: // vertical while start

                printf("Enter number of triangles : ");
                scanf("%d",&t);
                printf("Enter number of rows : ");
                scanf("%d",&r);

                printf("\n [1] Normal triangle.\n [2] Reversed triangle.\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a)
                {
                case 1: // normal while start
                    i=0;
                    while (i<t)
                    {j=0;
                        while (j<r)
                        {k=0;
                            while (k<=j)
                            {
                                printf("*");
                                k++;
                            }
                            printf("\n");
                        j++;
                        }
                        printf("\n");
                    i++;
                    }
                    break; //  normal while end

                case 2: // reversed while start
                    i=t;
                    while (i>0)
                    {j=r;
                        while (j>0)
                        {k=j;
                            while (k>0)
                            {
                                printf("*");
                                k--;
                            }
                            printf("\n");
                        j--;
                        }
                        printf("\n");
                    i--;
                    }
                    break; //  reversed while end
                }
                break; // vertical while end

            case 2: // horizontal while start

                printf("\n [1] Normal triangle.\n [2] Reversed triangle.\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a) // horizontal switch start
                {
                case 1:// normal while start
                    i=0;
                    while (i<=3)
                    {j=0;
                        while (j<i)
                        {
                            printf("*");
                            j++;
                        }
                        printf("\t");
                    j=0;
                        while (j<i)
                        {
                            printf("*");
                            j++;
                        }
                        printf("\t");
                    j=0;
                        while (j<i)
                        {
                            printf("*");
                            j++;
                        }
                        i++;
                        printf("\n");
                    }
                    break; // normal while end

                case 2: // reversed while start
                    i=3;
                    while (i>0)
                    {j=i;
                        while (j>0)
                        {
                            printf("*");
                            j--;
                        }
                        printf("\t");
                    j=i;
                        while (j>0)
                        {
                            printf("*");
                            j--;
                        }
                        printf("\t");
                    j=i;
                        while (j>0)
                        {
                            printf("*");
                            j--;
                        }
                        i--;
                        printf("\n");
                    }
                    break; // reversed while end
                } // horizontal switch end
                break; //  horizontal while end
            }
            break; //  while loop end

        case 3: //  do while loop start

            printf(" [1] Vertical triangle.\n [2] Horizontal triangle.\n");
            printf("\nEnter your choice : ");
            a=0;
            scanf("%d",&a);
            printf("\n");

            switch (a)
            {
            case 1: //  vertical do while start

                printf("Enter number of triangles : ");
                scanf("%d",&t);
                printf("Enter number of rows : ");
                scanf("%d",&r);

                printf("\n [1] Normal triangle.\n [2] Reversed triangle.\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a)
                {
                case 1: // normal do while start
                    i=0;
                    do
                    {j=0;
                        do
                        {k=0;
                            do
                            {
                                printf("*");
                                k++;
                            } while (k<=j);
                            printf("\n");
                            j++;
                        } while (j<r);
                        printf("\n");
                        i++;
                    } while (i<t);
                    break; //  normal do while end

                case 2: // reversed do while start
                    i=t;
                    do
                    {j=r;
                        do
                        {k=j;
                            do
                            {
                                printf("*");
                                k--;
                            } while (k>0);
                            printf("\n");
                            j--;
                        } while (j>0);
                        printf("\n");
                        i--;
                    } while (i>0);
                    break; //  reversed do while end
                }
                break; //  vertical do while end

            case 2: // horizontal do while start
                printf("\n [1] Normal triangle.\n [2] Reversed triangle.\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n");

                switch (a)
                {
                case 1: //  normal while start
                    i=1;
                    do
                    {j=0;
                        do
                        {
                            printf("*");
                            j++;
                        } while (j<i);
                        printf("\t");
                    j=0;
                        do
                        {
                            printf("*");
                            j++;
                        } while (j<i);
                        printf("\t");
                    j=0;
                        do
                        {
                            printf("*");
                            j++;
                        } while (j<i);
                        i++;
                        printf("\n");
                    } while (i<=3);

                    break; //  normal while end

                case 2: // reversed while start
                    i=3;
                    do
                    {j=i;
                        do
                        {
                            printf("*");
                            j--;
                        } while (j>0);
                        printf("\t");
                    j=i;
                        do
                        {
                            printf("*");
                            j--;
                        } while (j>0);
                        printf("\t");
                    j=i;
                        do
                        {
                            printf("*");
                            j--;
                        } while (j>0);
                        i--;
                        printf("\n");
                    } while (i>0);
                    break; // reversed while end
                }
                break; // horizontal do while end
            }
            break; //  do while loop end

        case 4:
            exit(0);
            break;

        default:
            printf("----Enter a valid choice.----\n\n");
            goto start_2;
        }// loop switch end
            break; //  Loops end

    start_3:
    case 2: // Array Start

        printf(" [1] 1D Array\n [2] 2D Array\n\n");
        printf("Enter your choice : ");
        a=0;
        scanf("%d",&a);
        printf("\n");

        switch (a) // Array switch start
        {
        case 1: //  1D array start

            printf(" [1] Calculator\n [2] Sorting\n [3] Searching\n\n");
            printf("Enter your choice : ");
            a=0;
            scanf("%d",&a);
            printf("\n");

            switch (a) // 1D switch start
            {
            case 1: // 1D calcultor start
                printf(" [1] Addition\n [2] Subtraction\n [3] Multiplication\n [4] Division\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n"); 
                
                for ( i = 0; i < ROW; i++)
                {
                    printf("Enter the element of a[%d] : ",i);
                    scanf("%d",&d[i]);
                }
                printf("\n");
                for ( i = 0; i < ROW; i++)
                {
                    printf("Enter the element of b[%d] : ",i);
                    scanf("%d",&e[i]);
                }
                printf("\n");                                                                  

                switch (a)                                                                  
                {                                                                   
                case 1: // addition start                                                                   
                    for ( i = 0; i < ROW; i++)                                                                 
                    {                                                                   
                        f[i] = d[i] + e[i];                                                                     
                    }                                                                   
                    for ( i = 0; i < ROW; i++)                                                                 
                    {                                                                   
                        printf("%d + %d = %d\n",d[i],e[i],f[i]);                                                                    
                    }                                                                   
                    break;// addition end                                                                   

                case 2: //  subtraction start                                                                   
                    for ( i = 0; i < ROW; i++)                                                                 
                    {                                                                   
                        f[i] = d[i] - e[i];                                                                     
                    }                                                                   
                    for ( i = 0; i < ROW; i++)                                                                 
                    {                                                                   
                        printf("%d - %d = %d\n",d[i],e[i],f[i]);                                                                    
                    }
                    break; //  subtraction end
                
                case 3: //  multiplication start
                    for ( i = 0; i < 4; i++)
                    {
                        f[i] = d[i] * e[i]; 
                    }
                    for ( i = 0; i < ROW; i++)
                    {
                        printf("%d x %d = %d\n",d[i],e[i],f[i]);
                    }
                    break; //  multiplication end

                case 4: //  division start
                    for ( i = 0; i < ROW; i++)
                    {
                        f[i] = d[i] / e[i]; 
                    }
                    for ( i = 0; i < ROW; i++)
                    {
                        printf("%d / %d = %d\n",d[i],e[i],f[i]);
                    }
                    break; //  division end

                default:
                    printf("\nEnter a valid choice.");
                        break;
                }
                break; //  1D calculator end
            
            case 2: // 1D soting start
                for ( i = 0; i < ROW; i++)
                    {
                        printf("Enter the element of a[%d] : ",i);
                        scanf("%d",&d[i]);
                    }
                    printf("\n");
                    printf("Before sorting  :  ");
                    for ( i = 0; i < ROW; i++)
                    {
                    printf("  %d  ",d[i]);
                    }
                    for ( i = 0; i < ROW; i++)
                    {
                        for ( j = i+1; j < ROW; j++)
                        {
                            if (d[i]>d[j])
                            {
                                r=d[i];
                                d[i]=d[j];
                                d[j]=r;
                            }
                        }
                    }
                    printf("\n");
                    printf("After sorting   :  ");
                    for ( i = 0; i < ROW; i++)
                    {
                    printf("  %d  ",d[i]);
                    }
                break; //  1D sorting end            

            case 3: // searching start
                printf(" [1] Linear\n [2] Binary\n\n");
                printf("Enter y0ur choice : ");
                scanf("%d",&c);
                printf("\n");

                for ( i = 0; i < ROW; i++)
                    {
                        printf("Enter the element of a[%d] : ",i);
                        scanf("%d",&d[i]);
                    }
                    printf("\n");
                    printf("The array is : ");
                    for ( i = 0; i < ROW; i++)
                    {
                        printf("%d ",d[i]);
                    }
                    printf("\n\nEnter the element : ");
                    scanf("%d",&key);

                switch (c) // searching switch start
                {
                case 1: // linear start
                    for ( i = 0; i < ROW; i++)
                    {
                        if (key==d[i])
                        {
                            index=i;
                            break;
                        }
                    }
                    if (index==-1)
                    {
                        printf("\nElement not found.");
                    }
                    else
                    {
                        printf("\nThe element %d is on %d place",key,index+1);
                    }
                        break; // linear end

                case 2: // binry start
                    while (min<=max)
                    {
                        mid = (min + max)/2;
                        if (d[mid]==key)
                        {
                            index=mid;
                            break;
                        }
                        else
                        {
                            if (key<d[mid])
                            {
                                max = mid - 1;
                            }
                            else
                            {
                                min = mid + 1;
                            }
                        }
                    }
                    if(index!=-1)
                    {
                        printf("Element is %d",mid+1);
                    }
                    else
                    {
                        printf("Element not found");
                    }
                    break;// binary end

                default:
                    printf("\nEnter a valid choice.");
                    break;
                }// searching switch end
                break; //  searching end
            }// 1D switch end
            break; //  1D array end

        case 2:  // 2D array
            
            printf(" [1] Calculator\n [2] Shorting\n\n");
            printf("Enter your choice : ");
            a=0;
            scanf("%d",&a);
            printf("\n");

            switch (a)
            {
            case 1: // 2D calculator start
               printf(" [1] Addition\n [2] Subtraction\n [3] Multiplication\n [4] Division\n\n");
                printf("Enter your choice : ");
                a=0;
                scanf("%d",&a);
                printf("\n"); 
                
                for ( i = 0; i < COL; i++)
                {
                    for ( j = 0; j < ROW; j++)
                    {
                        printf("Enter the element of a[%d][%d] : ",i,j);
                        scanf("%d",&g[i][j]);
                    }
                }
                printf("\n");
                for ( i = 0; i < COL; i++)
                {
                    for ( j = 0; j < ROW; j++)
                    {
                        printf("Enter the element of b[%d][%d] : ",i,j);
                        scanf("%d",&h[i][j]);
                    }
                }
                printf("\n");                                                                  

                switch (a)                                                                  
                {                                                                   
                case 1: // addition start                                                                   
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            m[i][j] = g[i][j] + h[i][j];
                        }
                    }
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            printf("%d + %d = %d\n",g[i][j],h[i][j],m[i][j]);
                        }
                    }                                                    
                    break;// addition end                                                                   

                case 2: //  subtraction start                                                                   
                    for ( i = 0; i < ROW; i++)
                    {
                        for ( j = 0; j < COL; j++)
                        {
                            m[i][j] = g[i][j] - h[i][j];
                        }
                    }
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            printf("%d - %d = %d\n",g[i][j],h[i][j],m[i][j]);
                        }
                    } 
                    break; //  subtraction end
                
                case 3: //  multiplication start
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            m[i][j] = g[i][j] * h[i][j];
                        }
                    }
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            printf("%d x %d = %d\n",g[i][j],h[i][j],m[i][j]);
                        }
                    } 
                    break; //  multiplication end

                case 4: //  division start
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            m[i][j] = g[i][j] / h[i][j];
                        }
                    }
                    for ( i = 0; i < COL; i++)
                    {
                        for ( j = 0; j < ROW; j++)
                        {
                            printf("%d / %d = %d\n",g[i][j],h[i][j],m[i][j]);
                        }
                    } 
                    break; //  division end

                default:
                    printf("\n----Enter a valid choice.----");
                        break;
                }
                break; //  2D calculator end 

            case 2: // 2D sorting start
                for ( i = 0; i <COL; i++)
                {
                    for ( j = 0; j < ROW; j++)
                    {
                        printf("Enter the element of a[%d][%d] : ",i,j);
                        scanf("%d",&g[i][j]);
                    }
                }
                printf("\n");
                printf("Before shorting");
                for ( i = 0; i < COL; i++)
                {
                    printf("\n");
                    for ( j = 0; j < ROW; j++)
                    {
                        printf("%d  ",g[i][j]);
                    }
                }
                
                for ( i = 0; i < COL; i++)
                {
                    for ( j = 0; j < ROW; j++)
                    {
                        y[o]=g[i][j];
                        o++;
                    }
                }
                for ( i = 0; i < ROW*COL; i++)
                {
                    for ( j = 0; j < ROW*COL-1; j++)
                    {
                        if (y[j]>y[j+1])
                        {
                            c=y[j];
                            y[j]=y[j+1];
                            y[j+1]=c;
                        }
                    }
                }
                o=0;
                for ( i = 0; i < COL; i++)
                {
                    for ( j = 0; j < ROW; j++)
                    {
                        g[i][j]=y[o];
                        o++;
                    }
                }
                             
                printf("\n");
                printf("After shorting");
                for ( i = 0; i < COL; i++)
                {
                    printf("\n");
                    for ( j = 0; j < ROW; j++)
                    {
                        printf("%d  ",g[i][j]);
                    }
                }
                break; // 2D shorting end  
            }
            break;  // 2D array

        default:
            printf("----Enter a valid choice.----\n\n");
            goto start_3;
            break;
        }// Array switch end
        break; // Array end

    case 3:
        exit(0);

    default:
        printf("----Enter a valid choice.----\n\n");
        goto start_1;
    }
    getch();
}