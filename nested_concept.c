#include <stdio.h>

int main() {
    int ticket, idproof, luggage;

    printf("Do you have a ticket? (1-yes , 0-no): ");
    scanf("%d", &ticket);

    if (ticket == 1) {

        printf("Do you have ID proof? (1-yes , 0-no): ");
        scanf("%d", &idproof);

        if (idproof == 1) {

            printf("Is luggage within 15kg? (1-yes , 0-no): ");
            scanf("%d", &luggage);

            if (luggage == 1) {
                printf("Check-in successful\n");
            } else {
                printf("Extra luggage charge applies\n");
            }

        } else {
            printf("ID proof required\n");
        }

    } else {
        printf("No ticket, no entry\n");
    }

    return 0;
}

