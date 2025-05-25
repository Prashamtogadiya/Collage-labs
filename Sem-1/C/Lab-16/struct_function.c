//  Add two distances in feet and inches using structure function.

 #include<stdio.h>

struct dist
{
    int feet, inch;
};

// declaring function 
struct dist add_dist(struct dist a, struct dist b);

void main(){
    struct dist d1,d2,d3;
    scanf("%d %d",&d1.feet,&d1.inch);
    scanf("%d %d",&d2.feet,&d2.inch);
    
    d3 = add_dist(d1, d2);
    printf("%d",d3);
}

struct dist add_dist (struct dist a, struct dist b){
    struct dist c;
    c.feet = a.feet + b.feet;
    c.inch = a.inch + b.inch;
    return c;
}