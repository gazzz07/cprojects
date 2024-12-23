/* Program takes user input of a UPC (individual digits) and breaks down requisite codes */

#include <stdio.h>

int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstSum, secondSum, total;

    printf("Enter all digits besides the check digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    
    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = 3 * firstSum + secondSum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
