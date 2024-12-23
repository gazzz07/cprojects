/* Program that breaks down a books ISBN number based on requisite parts. */

#include <stdio.h>

int main()
{
    printf("Enter your book's ISBN: ");
    int gs1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;
    scanf("%d - %d - %d - %d - %d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", 
        gs1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit);
}
