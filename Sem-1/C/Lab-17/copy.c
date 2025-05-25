//  Copy one file to another file.

#include<stdio.h>

void main()
{
    FILE *f1, *f2;
    char ch;
    f1 = fopen("file1.txt","r");
    f2 = fopen("file2.txt","a");
    while (ch!=EOF)
    {
        ch = getc(f1);
        putc(ch, f2);
    }
    fclose(f1);
    fclose(f2);
}