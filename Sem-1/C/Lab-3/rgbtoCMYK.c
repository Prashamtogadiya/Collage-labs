/* In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 
0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K 
varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white  */

#include<stdio.h>
void main(){
    int r,g,b;
    float r1,b1,g1;
    float white,cyan,magenda,yellow,black;

    printf("Enter value of rgb()\n");
    printf("RED : ");
    scanf("%d",&r);
    printf("GREEN : ");
    scanf("%d",&g);
    printf("BLUE : ");
    scanf("%d",&b);

    r1=r/255.0, b1=b/255.0, g1=g/255.0;

    if (r1>b1 && r1>g1)
    {
        white=r1;
    }
    else if (b1>r1 && b1>g1)
    {
        white=b1;
    }
    else
    {
        white=g1;
    }
       
    cyan = (white - r1)/white*0.1;
    magenda = (white - g1)/white*0.1;
    yellow = (white - b1)/white*0.1;
    black = 1 - white;

    printf("rgb(%d %d %d)\nCMYK(%f %f %f %f)",r,g,b,cyan,magenda,yellow,black);
}
