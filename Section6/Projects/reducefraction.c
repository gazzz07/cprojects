/* Program to reduce fractions to lowest terms */

#include <stdio.h>

int main()
{
    int first, second, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &first, &second);

    int reducedFirst = first, reducedSecond = second;

    while (second != 0)
    {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    reducedFirst = reducedFirst / first;
    reducedSecond = reducedSecond / first;
    printf("In lowest terms: %d/%d\n", reducedFirst, reducedSecond);
}
