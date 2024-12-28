/* Program to calculate how many digits a number contains */

#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int numberInput;
    scanf("%d", &numberInput);

    if (numberInput >= 0 && numberInput <= 9)
    {
        printf("The number %d has 1 digit.\n", numberInput);
    } else if (numberInput >= 10 && numberInput <= 99)
    {
        printf("The number %d has 2 digits.\n", numberInput);
    } else if (numberInput >= 100 && numberInput <= 999)
    {
        printf("The number %d has 3 digits.\n", numberInput);
    } else if (numberInput >= 1000 && numberInput <= 9999)
    {
        printf("The number %d has 4 digits.\n", numberInput);
    } else
    {
        printf("The number %d is out of range.\n", numberInput);
    }

    return 0;
}
