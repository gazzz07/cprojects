/* Program that asks for a number, then finds all even squares between 1 and n */

#include <stdio.h>

int main()
{
    int userInput;
    printf("Enter a non-negative number: ");
    scanf("%d", &userInput);

    for (int i = 0; i * i < userInput; i++) //entire if statement can be removed by starting at i = 2 and incrementing by 2 each loop.
    {
        if (i * i % 2 == 0)
        {
            printf("%d\n", i * i);
        }
        else
        {
            continue;
        }
    }
    
}
