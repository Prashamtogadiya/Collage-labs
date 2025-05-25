#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
    int i;
    float ans;
    float first;
    float second;
    int first_r;
    int second_r;
    int num;

    start:
    printf("WHAT YOU WANT TO DO ?\n [1] Summetion.\n [2] Subtraction.\n [3] Multiplication.\n [4] Division.\n [5] Remainder.\n [6] Squre.\n [7] Squre root.\n [8] Power.\n [9] log base 10.\n [10] log base e.\n [11] Antilog.\n [12] sin in degree.\n [13] cos in degree.\n [14] tan in degree.\n [15] cot in degree.\n [16] cosec in degree.\n [17] sec in degree.\n [18] Perameter of circle.\n [19] Area of circle.\n [20] Perameter of squre.\n [21] Factorial.\n [22] prime number.\n [0] exit.\n\n");
    printf("Enter your choice : ");
    scanf("%d", &i);
    
        switch (i)
        {
            case 0:
                printf("quiting program !");
                exit(0);
                break;

            case 1:
                printf("Enter first number : ");
                scanf("%f", &first);
                printf("Enter second number : ");
                scanf("%f", &second);
                ans = first + second;
                printf("%0.2f + %0.2f = %0.2f", first, second, ans);
                break;

            case 2:
                printf("Enter first number : ");
                scanf("%f", &first);
                printf("Enter second number : ");
                scanf("%f", &second);
                ans = first - second;
                printf("%0.2f - %0.2f = %0.2f", first, second, ans);
                break;

            case 3:
                printf("Enter first number : ");
                scanf("%f", &first);
                printf("Enter second number : ");
                scanf("%f", &second);
                ans = first * second;
                printf("%0.2f x %0.2f = %0.2f", first, second, ans);
                break;

            case 4:
                printf("Enter first number : ");
                scanf("%f", &first);
                printf("Enter second number : ");
                scanf("%f", &second);
                ans = first / second;
                printf("%0.2f/%0.2f = %0.2f", first, second, ans);
                break;

            case 5:
                printf("Enter first number : ");
                scanf("%d", &first_r);
                printf("Enter second number : ");
                scanf("%d", &second_r);
                ans = first_r % second_r;
                printf("The remainder is %0.0f", ans);
                break;

            case 6:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=first*first;
                printf("Squre of %0.2f is %0.2f",first,ans);
                break;

            case 7:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=sqrt(first);
                printf("Squreroot of %0.2f is %0.4f",first,ans);
                break;

            case 8:
                printf("Enter base number : ");
                scanf("%f", &first);
                printf("Enter power number : ");
                scanf("%f", &second);
                ans = pow(first,second);
                printf("%0.2f^%0.2f = %0.2f",first,second, ans);
                break;

            case 9:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=log10(first);
                printf("log (%0.4f) = %0.4f",first,ans);
                break;
            
            case 10:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=log(first);
                printf("ln (%0.4f) = %0.4f",first,ans);
                break;

            case 11:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=pow(10,first);
                printf("Antilog (%0.4f) = %0.4f",first,ans);
                break;

            case 12:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(sin((3.14/180)*first));
                printf("sin (%0.4f) = %0.4f",first,ans);
                break;

            case 13:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(cos((3.14/180)*first));
                printf("cos (%0.4f) = %0.4f",first,ans);
                break;

            case 14:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(tan((3.14/180)*first));
                printf("tan (%0.4f) = %0.4f",first,ans);
                break;

            case 15:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(1/(tan((3.14/180)*first)));
                printf("cot (%0.4f) = %0.4f",first,ans);
                break;

            case 16:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(1/(sin((3.14/180)*first)));
                printf("cosec (%0.4f) = %0.4f",first,ans);
                break;

            case 17:
                printf("Enter number : ");
                scanf("%f",&first);
                ans=(1/(cos((3.14/180)*first)));
                printf("sec(%0.4f) = %0.4f",first,ans);
                break; 

            case 18:
                printf("Enter value of radius : ");
                scanf("%0.3f",&first);
                ans=2*3.14*first;
                printf("Perimeter of circle if %f",ans);
                break;

            case 19:
                printf("Enter the value of radius : ");
                scanf("%0.3f",&first);
                ans=3.14*(first*first);
                printf("Area of circle if %f",ans);
                break;

            case 20:
                printf("Enter the lenght of side : ");
                scanf("%0.3f",&first);
                ans=pow(first,3);
                printf("Perimeter of squre is %f", ans);
                break;

            case 21:
                printf("Enter the numer you want the factorial of : ");
                scanf("%d", &first_r);
                if (first_r==0 || first_r==1)
                {
                    second_r = 1;
                }
                else
                {
                    second_r = 1;
                    for ( i = 1; i < first_r; i++)
                    {
                        second_r = second_r*(i+1);  
                    }

                }
                printf("%d! =  %d", first_r, second_r);
                break;

            case 22:
                printf("\n\nEnter a number : ");
                scanf("%d",&first_r);
                
                if (first_r==2)
                {
                    printf("%d is a prime number",first_r);
                }
                
                for ( i = 1; i < first_r; i++)
                {
                    if (first_r%i==0 || first_r==1 || first_r==0)
                    {
                        printf("%d is not a prime number",first_r);
                        break;
                    }
                    else
                    {
                        printf("%d is a prime number",first_r);
                        break;
                    }
                }
                break;

            default:
            printf("\n\nEnter valide choice.\n\n");
            goto start;
                break;
        }
    end:
    getch();
    return 0;
}