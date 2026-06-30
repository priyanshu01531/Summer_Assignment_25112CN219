#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\nLibrary Books\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", b[i].id);
        printf("\nBook: %s", b[i].name);
        printf("\nAuthor: %s\n", b[i].author);
    }

    return 0;
}