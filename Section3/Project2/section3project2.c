/* Program that formats product info entered by user (including item number, unit price and purchase date) */

#include <stdio.h>

int main()
{
    printf("Enter an item number: ");
    int itemNumber;
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    float unitPrice;
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int month, day, year;
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n"
        "%d\t\t$%8.2f\t%.2d/%.2d/%.2d\n", itemNumber, unitPrice, month, day, year);
}
