// Create a structure book with book title, author, publication, and price. Read data of 3 books and display.

#include<stdio.h>
#include<string.h>

struct Book
{
    char title[10], author[10], publication[10];
    int price;
};
void main(){
    struct Book b1,b2,b3;
    printf("Enter title of the book-1 : ");
    gets(b1.title);
    printf("Enter name of the author of book-1 : ");
    gets(b1.author);
    printf("Enter name of the publication of book-1 : ");
    gets(b1.publication);
    printf("Enter price of book-1 : ");
    scanf("%d",&b1.price);

    printf("\nEnter title of the book-2 : ");
    scanf("%s",b2.title);
    printf("Enter name of the author of book-2 : ");
    scanf("%s",b2.author);
    printf("Enter name of the publication of book-2 : ");
    scanf("%s",b2.publication);
    printf("Enter price of book-2 : ");
    scanf("%d",&b2.price);
    
    printf("\nEnter title of the book-3 : ");
    scanf("%s",b3.title);
    printf("Enter name of the author of book-3 : ");
    scanf("%s",&b3.author);
    printf("Enter name of the publication of book-3 : ");
    scanf("%s",&b3.publication);
    printf("Enter price of book-3 : ");
    scanf("%d",&b3.price);

    printf("\n----Book-1----\n");
    printf("Title : %s\n",b1.title);
    printf("Author : %s\n",b1.author);
    printf("Publication : %s\n",b1.publication);
    printf("Price : %d\n",b1.price);

    printf("\n----Book-3----\n");
    printf("Title : %s\n",b2.title);
    printf("Author : %s\n",b2.author);
    printf("Publication : %s\n",b2.publication);
    printf("Price : %d\n",b2.price);
    
    printf("\n----Book-3----\n");
    printf("Title : %s\n",b3.title);
    printf("Author : %s\n",b3.author);
    printf("Publication : %s\n",b3.publication);
    printf("Price : %d",b3.price);
}