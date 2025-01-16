/*Program to calculate the remaining balance on a loan after first, second and third monthly payments.
        Also asks user to enter number of payments and displays remaining balance after each*/

#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment;
    int numberOfPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    printf("Enter the number of payments: ");
    scanf("%d", &numberOfPayments);

    float monthlyInterestRate = (interestRate / 100) / 12;

    for (int i = 1; i <= numberOfPayments; i++)
    {
        loanAmount = (loanAmount - monthlyPayment) + (loanAmount * monthlyInterestRate);
        printf("Balance remaining after %d payment: %.2f\n", i, loanAmount);
    }    

    return 0;
}
