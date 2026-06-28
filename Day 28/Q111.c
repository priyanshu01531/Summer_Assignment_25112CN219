#include <stdio.h>

struct Ticket {
    int ticketNo;
    char passenger[50];
    char destination[50];
};

int main() {
    struct Ticket t;

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    getchar();

    printf("Enter Passenger Name: ");
    fgets(t.passenger, sizeof(t.passenger), stdin);

    printf("Enter Destination: ");
    fgets(t.destination, sizeof(t.destination), stdin);

    printf("\n--- Ticket Details ---\n");
    printf("Ticket No   : %d\n", t.ticketNo);
    printf("Passenger   : %s", t.passenger);
    printf("Destination : %s", t.destination);

    return 0;
}