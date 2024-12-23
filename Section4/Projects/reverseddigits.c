/* Program takes 3-digit number from user, then prints with digits reversed. */

#include <stdio.h>

/*int main()
{
    printf("Enter a 3-digit number: ");
    int threeDigits;
    scanf("%d", &threeDigits);

    printf("The reverse is: %d%d%d\n", threeDigits % 10, (threeDigits / 10) % 10, (threeDigits / 10) / 10); //last could also be written as threeDigits / 100
}*/

//Rewritten to not use arithmetic

int main()
{
    printf("Enter a 3-digit number: ");
    int x, y, z;
    scanf("%1d%1d%1d", &x, &y, &z);
    printf("The reverse is: %d%d%d\n", z, y, x);
}
