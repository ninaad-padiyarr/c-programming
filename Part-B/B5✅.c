/*A local library needs to store display details of its book including 
title author and year od publication.design a structure that can hold these
 these deails and develop a c programe to displ;ay a list of all books entered*/
 #include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    int year;
};

int main()
{
    struct Book b[10];
    int n, i;

    printf("How many books? ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Year: ");
        scanf("%d", &b[i].year);
    }

    // Display all books
    printf("\n--- Book List ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Year: %d\n", b[i].year);
    }

    return 0;
}