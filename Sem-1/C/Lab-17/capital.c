// Capitalize first letter of each word in file.

#include<stdio.h>
 
int main(){
    FILE *fp;
    int i;
    char ch, str[100];
    fp = fopen("file1.txt","r+");
    do
    {
        fscanf(fp, "%s", str);
        printf("%c ",str[0]);
        if (str[0] > 96)
        {
            str[0]-=32;
        }
        printf(" %s ",str);
        fprintf(fp, "%s ",str);
        ch = getc(fp);
    } while (ch != EOF);
    
    fclose(fp);
    return 0;
}