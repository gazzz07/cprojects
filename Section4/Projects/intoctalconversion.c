/* Program that converts a user provided integer to an octal */

#include <stdio.h>

int main()
{
    printf("Enter a number between 0 and 32767: ");
    int userInput;
    scanf("%5d", &userInput);

    int octal5, octal4, octal3, octal2, octal1;

    octal5 = userInput % 8;
    octal4 = (userInput / 8) % 8;
    octal3 = ((userInput / 8) / 8) % 8;
    octal2 = (((userInput / 8) / 8) / 8) % 8;
    octal1 = ((((userInput / 8) / 8) / 8) /8) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", octal1, octal2, octal3, octal4, octal5);

    return 0;
}
