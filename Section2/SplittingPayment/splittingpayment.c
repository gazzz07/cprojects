/*Program asks user for a dollar amount, then gives efficient denominations to pay in*/

#include <stdio.h>

int main(void)
{
    int dollarInput;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarInput);

    int twentyDollars = dollarInput / 20;
    int tenDollars = (dollarInput - (twentyDollars * 20)) / 10;
    int fiveDollars = (dollarInput - (twentyDollars * 20) - (tenDollars * 10)) / 5;
    int oneDollar = (dollarInput - (twentyDollars * 20) - (tenDollars * 10) - (fiveDollars * 5));

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twentyDollars, tenDollars, fiveDollars, oneDollar);

    return 0;
}
