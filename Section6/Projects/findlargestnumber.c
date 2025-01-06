/* Program that accepts user input of numbers until the number 0 is entered. Then prints the largest number */

#include <stdio.h>

int main()
{
    float largestNumber, userInput = 1;

    while (userInput >= 0)
    {
        printf("Enter a number: ");
        scanf("%f", &userInput);
        
        if (userInput > largestNumber)
        largestNumber = userInput;
    }

    printf("The largest number entered was %f", largestNumber);
}
