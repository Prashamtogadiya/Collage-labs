#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,l;

    clrscr();
    
    printf("\n[1] Arrow\n[2] Rocket\n[3] Numbers\n");
    printf("\nEnter your preference : ");
    scanf("%d",&i);

    switch (i) // start of main switch
    {
    case 1:// start of arrow
        for ( i = 0; i < 5; i++)
        {
            if (i<3)
            {
                for ( j = 2; j > i; j--)
                {
                    printf(" ");
                }
                if (i>1)
                {
                    for ( j = 0; j < i+4; j++)
                    {
                        printf("* ");
                    }
                }
                else
                {
                    printf("*");
                }
                
            }
            else
            {
                for ( j = 2; j < i; j++)
                {
                    printf(" ");
                }
                printf("*");
            }
            printf("\n");
        }
        break;// end of arrow

    case 2: // start of rocket
        for ( i = 0; i < 14; i++)
        {
            if (i<4)
            {
                for ( j = i; j < 4; j++)
                {
                    printf(" ");
                }
                    printf("  * ");
                for ( j = 0; j < i-1; j++)
                {
                    printf("  ");
                }
                if (i!=0)
                {
                    printf("*");
                }
                if (i<4)
                    printf("\n");
            }
            if (i==4)
            {
                printf("  *********");
            } // upper part end 

            if (i>4 && i<9)
            {
                printf("\n    *");
                for ( j = 0; j < 3; j++)
                {
                    printf(" ");
                }
                printf("*");
            }
            if (i==9)
            {
                printf("\n    *****");
            } // middle part end

            if (i>9 && i<13)
            {
                printf("\n");
                for ( j = i; j < 12; j++)
                {
                    printf(" ");
                }
                printf(" *");
                for ( j = 0; j < i-8; j++)
                {
                    printf("  ");
                }
                printf(" *");
                if (i==12)
                {
                    printf("\n*************");
                } // last part end
            }
        }
        break; // end of rocket

    case 3: // start of number
        printf("\nEnter your favourite number(0-9) : ");
        start:
        scanf("%d",&i);
        if (i>9 || i<0)
        {
            printf("Please enter between 1-9 : ");
            goto start;
        }
        switch (i)
        {
        case 1: // start of 1
            printf("\n");
            for ( i = 0; i < 5; i++)
            {
                if (i<3)
                {
                    for ( j = i; j < 3; j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for ( j = 0; j < i-1; j++)
                    {
                        printf(" ");
                    }
                    if (i!=0)
                    {
                        printf("*");
                    }
                    
                }
                if (i>2 && i<4)
                {
                    for ( j = 0; j < 3; j++)
                    {
                        printf(" ");
                    }
                        printf("*");
                }
                if (i==4)
                {
                    for ( k = 0; k < 7; k++)
                    {
                        printf("*");
                    }
                }
                printf("\n");
            }
            break; // end of 1
        
        case 2: // start of 2
            printf("\n");
            for ( i = 0; i < 6; i++)
            {
                if (i<2)
                {
                    for ( j = i; j < 2; j++)
                    {
                        printf(" ");
                    }
                        printf("*");
                    for ( j = 0; j < i; j++)
                    {
                        printf("  ");
                    }
                    if (i==0)
                    {
                        printf("****");
                    }
                    else
                    {
                        printf("  *");
                    }
                    printf("\n");
                }
                if (i>1 && i<5)
                {
                    for ( j = 6; j > i-1; j--)
                    {
                        printf(" ");
                    }
                    printf("*\n");
                }
                if (i==5)
                {
                    printf("  ******");
                }
            }
            break; // end of 2

        case 3: //  start of 3
            printf("\n");
            for ( i = 0; i < 8; i++)
            {
                if (i==0)
                {
                    printf("******");
                }
                if (i>0 && i<3)
                {
                    for ( j = 5; j > i ; j--)
                    {
                        printf(" ");
                    }  
                    printf("*");
                }
                if (i==3)
                {
                    printf("  *****");
                }
                if (i>3 && i<6)
                {
                    for ( j = 0; j < 2; j++)
                    {
                        for ( i = 0; i < 6; i++)
                        {
                            printf(" ");
                        }
                        if (j==0)
                        {
                            printf("*\n");

                        }
                        if(j==1)
                        {
                            printf("*");
                        }
                    }
                }
                if (i==7)
                {
                    printf("*******");
                }
                
                printf("\n");
            }
            break; // end of 3

        case 4: // start of four
            printf("\n");
            for ( i = 0; i < 5; i++)
            {
                if (i<4)
                {
                    for ( j = i; j < 4; j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                    for ( j = 0; j < i-1; j++)
                    {
                        if (i<3)
                        {
                            printf(" ");
                        }
                        else
                        {
                            printf("**");
                        }
                    }
                    if (i!=0)
                    {
                        printf("*");
                    }
                }
                else
                {
                    for ( j = 0; j < 4; j++)
                    {
                        printf(" ");
                    }
                    printf("*");
                }
                printf("\n");
            }
            break; // end of four

        case 5: // start of five
            printf("\n******\n");
            printf("*\n*\n*");
            printf("****\n");
            for ( i = 0; i < 2; i++)
            {
                for ( j = 0; j < 4; j++)
                {
                    printf(" ");
                }
                printf("*\n");
                if(i==1)
                {
                    printf("*****");
                }
            }
            break; // end of five

        case 6: // start of 6
            printf("\n*******\n");
            printf("****\n");
            printf("*  *\n");
            printf("****");
            break; // end of 6

        case 7: // start of 7
            printf("\n*****\n");
            for ( i = 0; i < 3; i++)
            {
                for ( j = i; j < 3; j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
            break; // end of 7

        case 8: // start of 8
            printf("\n******\n");
            for ( j = 0; j < 2; j++)
            {
                printf("*    *\n");
            }
            printf("******\n");
            for ( j = 0; j < 2; j++)
            {
                printf("*    *\n");
            }
            printf("******");
            break; // end of 8

        case 9: // start of 9
            printf("\n******\n");
            for ( i = 0; i < 2; i++)
            {
                printf("*    *\n");
            }
            printf("******\n");
            for ( i = 0; i < 3; i++)
            {
                for ( j = 0; j < 5; j++)
                {
                printf(" ");
                }
                printf("*\n");
            }
            break; // end of 9
        }
        break; // end of number
    
    } // end of main switch
    
    getch();
}