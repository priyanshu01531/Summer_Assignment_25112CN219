#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c;

    printf("Enter Name: ");
    fgets(c.name, sizeof(c.name), stdin);

    printf("Enter Phone Number: ");
    fgets(c.phone, sizeof(c.phone), stdin);

    printf("Enter Email: ");
    fgets(c.email, sizeof(c.email), stdin);

    printf("\n--- Contact Details ---\n");
    printf("Name  : %s", c.name);
    printf("Phone : %s", c.phone);
    printf("Email : %s", c.email);

    return 0;
}