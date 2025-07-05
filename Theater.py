#include <stdio.h>
#include <string.h>

int main() {
    char ticket_class;
    int number_of_tickets;
    char refreshments[4];
    float total_cost;
    
    const float k_class_price = 75.0, q_class_price = 150.0, refreshment_cost = 50.0;
    const float discount_bulk = 0.10, discount_coupon = 0.02;

    printf("Enter ticket class (k/q): ");
    scanf(" %c", &ticket_class);
    printf("Enter number of tickets: ");
    scanf("%d", &number_of_tickets);
    printf("Do you want refreshments? (yes/no): ");
    scanf("%s", refreshments);

    if (number_of_tickets < 5 || number_of_tickets > 40) {
        printf("Minimum of 5 and Maximum of 40 Tickets\n");
        return 0;
    }
    if (ticket_class != 'k' && ticket_class != 'q') {
        printf("Invalid Input\n");
        return 0;
    }

    total_cost = (ticket_class == 'k' ? k_class_price : q_class_price) * number_of_tickets;
    if (strcmp(refreshments, "yes") == 0) {
        total_cost += refreshment_cost * number_of_tickets;
        if (number_of_tickets <= 20) total_cost *= (1 - discount_coupon);
    }
    if (number_of_tickets > 20) total_cost *= (1 - discount_bulk);

    printf("Total Cost: Rs. %.2f\n", total_cost);
    return 0;
}
