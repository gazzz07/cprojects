/*Program to calculate a 5% tax on inputted dollar and cent amount*/

#include <stdio.h>

int main(void)
{
    float dollarsAndCents;

    printf("Enter an amount (in dollars and cents): ");
    scanf ("%f", &dollarsAndCents);
    printf("With tax added: %.2f\n", dollarsAndCents * 1.05f);
}
