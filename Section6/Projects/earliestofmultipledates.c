/* Program that takes input of multiple dates (until the user enters 0/0/0)
            and returns the earliest on the calendar */

#include <stdio.h>

int main()
{

    int month = 1, day = 1, year = 1, earliestDay = 31, earliestMonth = 12, earliestYear = 99;
    
    do
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);
        
        if (year != 0 && year < earliestYear)
        {
            earliestYear = year;
            earliestMonth = month;
            earliestDay = day;
        }
        else if (earliestYear < year)
        {
            continue;
        }
        else
        {
            if (month != 0 && month < earliestMonth)
            {
                earliestMonth = month;
                earliestYear = year;
                earliestDay = day;
            }
            else if (earliestMonth < month)
            {
                continue;
            }
            else
            {
                if (day != 0 && day < earliestDay)
            {
                earliestDay = day;
                earliestMonth = month;
                earliestYear = year;
                }
                else
                {
                    continue;
                }
            }
        }
    } while (month != 0 && day != 0 && year != 0);

    printf("%02d/%02d/%02d is the earliest date\n", earliestMonth, earliestDay, earliestYear);
}
