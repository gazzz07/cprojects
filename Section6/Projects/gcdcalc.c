/* Program to find the greatest common divisor of two user inputted integers */

#include <stdio.h>

int main()
{
    int first, second, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    while (second != 0)
    {
        remainder = first % second;
        first = second;
        second = remainder;
    }
    printf("Greatest common divisor: %d\n", first);
}
