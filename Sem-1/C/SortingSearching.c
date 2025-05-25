#include<stdio.h>
#include<conio.h>

void main()
{
    
    int a[10],i,j,c;
    int *x;
    x=a;

    printf("[1] Sorting\n[2] Searching\n");
    printf("\nEnter your choice : ");
    scanf("%d",&i);

    switch (i)
    {
    case 1: 
        
        printf("\n[1] Integer sorting\n[2] Charcter sorting\n");
        printf("\nEnter your choice : ");
        scanf("%d",&i);

        switch (i)
        {
        case 1: // start of integer shoting
            for ( i = 0; i < 10; i++)
            {
                printf("a[%d] = ",i);
                scanf("%d",x+i);
            }
            printf("\nBefore sorting\n");
            for ( i = 0; i < 10; i++)
            {
                printf("%d ",*(x+i));
            }
            for ( i = 0; i < 10; i++)
            {
                for ( j = 0; j < 10; j++)
                {
                    if (*(x+j)>*(x+j+1))
                    {
                        c=*(x+j);
                        *(x+j)=*(x+j+1);
                        *(x+j+1)=c;
                    }
                }
            }
            printf("\nAfter sorting\n");
            for ( i = 0; i < 10; i++)
            {
                printf("%d ",*(x+i));
            }
            break; // end of integer sorting
        
        case 2:
            for ( i = 0; i < 10; i++)
            {
                printf("a[%d] = ",i);
                scanf(" %c",x+i);
            }
            printf("\nBefore sorting\n");
            for ( i = 0; i < 10; i++)
            {
                printf("%c ",*(x+i));
            }
            for ( i = 0; i < 10; i++)
            {
                for ( j = 0; j < 10; j++)
                {
                    if (*(x+j)>*(x+j+1))
                    {
                        c=*(x+j);
                        *(x+j)=*(x+j+1);
                        *(x+j+1)=c;
                    }
                }
            }
            printf("\nAfter sorting\n");
            for ( i = 0; i < 10; i++)
            {
                printf("%c ",*(x+i));
            }
            break;
        }
        break; // end of sorting
    
    case 2:// start of searching
        printf("\n[1] Integer searching\n[2] Charcter searching\n");
        printf("\nEnter your choice : ");
        scanf("%d",&i);

        switch (i)
        {
        case 1: // start of int searching
            for ( i = 0; i < 10; i++)
            {
                printf("a[%d] : ",i);
                scanf("%d",x+i);
            }

            printf("\nEnter element you want to find : ");
            scanf("%d",&j);
            for ( i = 0; i < 10; i++)
            {
                if (j==*(x+i))
                {
                    c=i;
                    break;
                }
            }
            if (c==-1)
            {
                printf("\nElement not found.");
            }
            else
            {
                printf("\nThe element %d is on %d place",j,c+1);
            }
            break; //  end of int searching
        
        case 2: //  start of char searching
            for ( i = 0; i < 10; i++)
            {
                printf("a[%d] : ",i);
                scanf(" %c",x+i);
            }

            printf("\nEnter element you want to find : ");
            scanf(" %c",&j);
            for ( i = 0; i < 10; i++)
            {
                if (j==*(x+i))
                {
                    c=i;
                    break;
                }
            }
            if (c==-1)
            {
                printf("\nElement not found.");
            }
            else
            {
                printf("\nThe element %c is on %c place",j,c+1);
            }
            break; // end of char searching
        }
        break; // end of searching
    }
    

    getch();
}