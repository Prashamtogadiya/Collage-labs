// Print contents of file in reverse order.

#include <stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("file1.txt", "r");
    char ch;
    int l = 0, i = 0;
    char str[50];
    do
    {
        ch = getc(fp);
        str[i++] = ch;
        l++;
    } while (ch != EOF);
    fclose(fp);

    fp = fopen("file1.txt","a");
    fprintf(fp, "\n");
    for (i = l-1; i >= 0; i--)
    {
        fprintf(fp, "%c", str[i]);
    }
    fclose(fp);
}