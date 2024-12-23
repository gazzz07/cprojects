/* Program accepts a date from user in mm/dd/yyyy and displays in yyyymmdd */

#include <stdio.h>

int main()
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("You entered the date: %d%d%d\n", year, month, day);
}
