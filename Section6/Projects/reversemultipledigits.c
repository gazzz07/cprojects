/* Program that takes multiple digit input and reverses them ie 12345 > 54321 */

#include <stdio.h>

int main()
{
    int userInput;
    printf("Enter a non-negative number: ");
    scanf("%d", &userInput);

    printf("Digits reversed: ");

    do
    {
        printf("%d", userInput % 10);
        userInput /= 10;
    } while (userInput != 0);

    printf("\n");

    return 0;
}
