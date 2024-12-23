/*Program to calculate the remaining balance on a loan after first, second and third monthly payments.*/

#include <stdio.h>

int main(void)
{
    float loanAmount;
    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    float interestRate;
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    float monthlyPayment;
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterestRate = (interestRate / 100) / 12;

    float firstMonth = (loanAmount - monthlyPayment) + (loanAmount * monthlyInterestRate);
    float secondMonth = (firstMonth - monthlyPayment) + (firstMonth * monthlyInterestRate);
    float thirdMonth = (secondMonth - monthlyPayment) + (secondMonth * monthlyInterestRate);

    printf("Balance remaining after first payment: %.2f\n", firstMonth);
    printf("Balance remaining after second payment: %.2f\n", secondMonth);
    printf("Balance remaining after third payment: %.2f\n", thirdMonth);

    return 0;
}
