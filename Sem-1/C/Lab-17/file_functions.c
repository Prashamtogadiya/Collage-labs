// Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().

#include <stdio.h>
void main()
{
    FILE *f;
    char name[10], gender;
    int age;

    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter youe age : ");
    scanf("%d",&age);
    printf("Enter your gender : ");
    scanf("%c ",&gender);

    f = fopen("file.txt2", "w");
    fprintf(f, "%s\t%d\t%c ",name,age,gender);
    fclose(f);


    f = fopen("file.txt", "r");
    fscanf(f, "%s %d %c ", name, &age, &gender);
    printf("%s\t%d\t%c ",name,age,gender);
    char get = getc(f);
    fseek(f, 0L, 2);
    rewind(f);

    fclose(f);
    f = fopen("file.txt", "a");
    putc(get, f);
    fclose(f);
}