/* Program takes user input of an EAN instead of UPC (individual digits) and breaks down requisite codes */

#include <stdio.h>

int main()
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, firstSum, secondSum, total;

    printf("Enter all digits besides the check digit: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
    
    firstSum = i2 + i4 + i6 + i8 + i10 + i12;
    printf("%d\n", firstSum); //added to troubleshoot, leaving to show basic debugging
    secondSum = i1 + i3 + i5 + i7 + i9 + i11;
    printf("%d\n", secondSum); //added to troubleshoot
    total = (((3 * firstSum) + secondSum) - 1) % 10;
    printf("%d\n", total); //added to troubleshoot
    int checkDigit = 9 - total;

    printf("Check digit: %d\n", checkDigit);

    return 0;
}
