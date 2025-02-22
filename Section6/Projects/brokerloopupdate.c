/* Program to calculate a brokers commission - 
        adding a loop for multiple trades to find commission on each */

#include <stdio.h>

int main()
{
    int numberShares;
    float commission, pricePerShare, value = 1, rivalCommission;

    while (value != 0)
    {
    printf("Enter the number of shares: ");
    scanf("%d", &numberShares);
    printf("Enter the price per share: ");
    scanf("%f", &pricePerShare);

    value = numberShares * pricePerShare;

    //printf("Enter value of trade: ");
    //scanf("%f", &value);

    if (value < 2500.00f)
    {
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + .0066f * value;
    } 
    else if (value < 20000.00f)
    {
        commission = 76.00f + .0034f * value;
    } 
    else if (value < 50000.00f)
    {
        commission = 100.00f + .0022f * value;
    } 
    else if (value < 500000.00f)
    {
        commission = 155.00f + .0011f * value;
    } 
    else
    {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    if (numberShares < 2000)
    {
        rivalCommission = 33 + (numberShares * .03f);
    }
    else if (numberShares > 2000)
    {
        rivalCommission = (33 + (2000 * .03f)) + ((numberShares - 2000) * .02f);
    }

    printf("Commission: $%.2f\nRival commission: $%.2f\n", commission, rivalCommission);
    }
    
    return 0;
}
