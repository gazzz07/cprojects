/*Program asks user to input a value for X, then uses it in various ways*/

#include <stdio.h>

int main(void)
{
    int x;
    printf("Please enter a value for x: ");
    scanf("%d", &x);

    printf("Result = %d\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
}
