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

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();   // clear newline from buffer

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Title: ");
        fgets(b[i].title, 50, stdin);

        printf("Author: ");
        fgets(b[i].author, 50, stdin);

        printf("Year: ");
        scanf("%d", &b[i].year);
        getchar();   // clear newline
    }

    printf("\nBook Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nTitle: %s", b[i].title);
        printf("Author: %s", b[i].author);
        printf("Year: %d\n", b[i].year);
    }

    return 0;
}