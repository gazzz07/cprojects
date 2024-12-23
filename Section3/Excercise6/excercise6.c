/* Adds two fractions */

#include <stdio.h>

int main()
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1); //added spaces before and after / character as scanf will ignore whitespace if you put it in

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2); //added spaces before and after / character as scanf will ignore whitespace if you put it in

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
