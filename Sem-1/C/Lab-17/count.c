// Count chars, spaces, tabs and new lines in a file.

#include <stdio.h>

void main()
{
    FILE *f;
    char ch;
    int int_ch = 0, space = 0, tab = 0, line = 0;
    f = fopen("file1.txt", "r");
     ch = getc(f);
    while (ch != EOF)
    {   
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\t')
        {
            tab++;
        }
        else if (ch == '\n')
        {
            line++;
        }
        else
        {
            int_ch++;
        }
        ch = getc(f);
    }
    fclose(f);

    printf("\nCharacters = %d\n", int_ch);
    printf("Space = %d\n", space);
    printf("Tabs = %d\n", tab);
    printf("New lines = %d", line);
}