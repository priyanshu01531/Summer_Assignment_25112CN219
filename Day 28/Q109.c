#include <stdio.h>

struct Library {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Library book;

    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);

    getchar(); // Clear newline

    printf("Enter Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("\n--- Book Details ---\n");
    printf("Book ID : %d\n", book.bookId);
    printf("Title   : %s", book.title);
    printf("Author  : %s", book.author);

    return 0;
}