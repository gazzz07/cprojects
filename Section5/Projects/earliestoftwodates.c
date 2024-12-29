/* Program that takes input of 2 dates and returns the earliest on the calendar */

#include <stdio.h>

int main()
{
    int month1, day1, year1, month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    if (year1 < year2)
    {
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (year2 < year1)
    {
        printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2, day2, year2, month1, day1, year1);
    }
    else
    {
        if (month1 < month2)
        {
            printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1, day1, year1, month2, day2, year2);
        }
        else if (month2 < month1)
        {
            printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2, day2, year2, month1, day1, year1);
        }
        else
        {
            if (day1 < day2)
            {
                printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month1, day1, year1, month2, day2, year2);
            }
            else if (day2 < day1)
            {
                printf("%2d/%2d/%2d is earlier than %2d/%2d/%2d\n", month2, day2, year2, month1, day1, year1);
            }
            else
            {
                printf("The 2 dates are identical.\n");
            }
        }
    }
}
