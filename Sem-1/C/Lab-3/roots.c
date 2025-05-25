// Determine the roots of the equation ax2+bx+c=0.

#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float d,root1,root2;

    printf("(a)x^2 + (b)x + (c) = 0");
    printf("\na : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    printf("c : ");
    scanf("%d",&c);

    d = sqrt((b*b)-(4*a*c));

    if (d==0)
    {
        root1=(-b)/(2*a);
        printf("\n(%d)x^2 + (%d)x + (%d) = 0\n x = %f",a,b,c,root1);
    }
    else if (d>0)
    {
        root1=(-b+d)/(2*a);
        root2=(-b-d)/(2*a);
        printf("\n(%d)x^2 + (%d)x + (%c) = 0\n x = %f\n   or\nx = %f",a,b,c,root1,root2);
    }
    else
    {
        printf("\nD is -ve\nSo roots of the equation are not real");
    }
    getch();
}