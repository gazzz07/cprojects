/* Program that takes multiple digit input and reverses them ie 12345 > 54321 */

#include <stdio.h>

int main()
{
    printf("Enter a non-negative number: ");
    int userInput;
    scanf("%d", &userInput);

    do
    {

    } while (userInput != 0);

    printf("The reverse is: %d%d%d\n", threeDigits % 10, (threeDigits / 10) % 10, (threeDigits / 10) / 10); //last could also be written as threeDigits / 100
}
