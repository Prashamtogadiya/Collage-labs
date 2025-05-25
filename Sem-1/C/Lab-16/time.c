// Add two times hh, mm and ss using structure

#include<stdio.h>

typedef struct
{
    int h,m,s;
}time;


void main(){
    time t[3];

    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter time-%d\n",i+1);
        printf("h : ");
        scanf("%d",&t[i].h);
        printf("m : ");
        scanf("%d",&t[i].m);
        printf("s : ");
        scanf("%d",&t[i].s);
    }

    t[2].h = t[0].h + t[1].h;
    t[2].m = t[0].m + t[1].m;
    t[2].s = t[0].s + t[1].s;

    if (t[2].s > 59)
    {
        t[2].m++;
        t[2].s -= 60;
        if (t[2].m > 59)
        {
            t[2].h++;
            t[2].m -= 60;
        }
    }
    else if (t[2].m > 59)
    {
        t[2].h++;
        t[2].m -= 60;
    }
    printf("\nt1 + t2 = %d : %d : %d",t[2].h,t[2].m,t[2].s);
}