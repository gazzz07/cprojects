/* Program that takes a 24 hour hour time from user and coverts to 12 hour */

#include <stdio.h>

int main()
{
    printf("Enter a 24-hour time: ");
    int hours, minutes;
    scanf("%d:%d", &hours, &minutes);

    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59)
    {
        if (hours == 12)
        {
            printf("Equivalent 12-hour time: %d:%02d PM\n", hours, minutes);
        } else if (hours == 00)
        {
            printf("Equivalent 12-hour time: %d:%02d AM\n", hours + 12, minutes);
        } else if (hours >= 01 && hours <= 11)
        {
            printf("Equivalent 12-hour time: %d:%02d AM\n", hours, minutes);
        } else if (hours >= 13 && hours <= 23)
        {
            printf("Equivalent 12-hour time: %d:%02d PM\n", hours - 12, minutes);
        } else
        {
            printf("Invalid input.\n");
        }
    } else 
    {
        printf("Invalid input. Please enter a real time.\n");
    }
    return 0;
}
