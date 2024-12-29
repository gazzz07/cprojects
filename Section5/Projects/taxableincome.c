/* Program where user enters taxable income and displays the tax due */

#include <stdio.h>

int main()
{
    float annualIncome, taxDue;
    
    printf("Enter your taxable income: ");
    scanf("%.2f", &annualIncome);

    //nested ifs

    if (annualIncome < 750)
    {
        taxDue = annualIncome * .01f;
    } else if (annualIncome <= 2250)
    {
        taxDue = ((annualIncome - 750) * .02f) + 7.5;
    } else if (annualIncome <= 3750)
    {
        taxDue = ((annualIncome - 2250) * .03f) + 37.5;
    } else if (annualIncome <= 5250)
    {
        taxDue = ((annualIncome - 3750) * .04f) + 82.5;
    } else if (annualIncome <= 7000)
    {
        taxDue = ((annualIncome - 5250) * .05f) + 142.5;
    } else
    {
        taxDue = ((annualIncome - 7000) * .06f) + 230;
    }

    printf("Tax Due: $%.2f\n", taxDue);
    return 0;
}

2% of 1500
3% of 1500
4% of 1500
5% of 1750
6% of 
