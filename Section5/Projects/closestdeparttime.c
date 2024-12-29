/* Program that prints the closest departure time to user input */

//8am = 480, 9:43am = 583, 11:19am = 679, 12:47pm = 767,,,, 2pm = 854,,,,,,, 3pm = 945,,,,,,,, 7pm = 1140, 9:45pm = 1305

#include <stdio.h>

int main()
{
    int hours, minutes, minsAfterMidnight;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    minsAfterMidnight = (hours * 60) + minutes;

    if (minsAfterMidnight < 532)
    {
        printf("Closest departure time: 08:00am, Arrival time: 10:16am\n");
    }
    else if (minsAfterMidnight >= 533 && minsAfterMidnight <=  629)
    {
        printf("Closest departure time: 9:43am, Arrival time: 11:52am\n");
    }
    else if (minsAfterMidnight >= 630 && minsAfterMidnight <=  723)
    {
        printf("Closest departure time: 11:19am, Arrival time: 1:31pm\n");
    }
    else if (minsAfterMidnight >= 724 && minsAfterMidnight <=  810)
    {
        printf("Closest departure time: 12:47pm, Arrival time: 3:00pm\n");
    }
    else if (minsAfterMidnight >= 811 && minsAfterMidnight <=  899)
    {
        printf("Closest departure time: 2:00pm, Arrival time: 4:08pm\n");
    }
    else if (minsAfterMidnight >= 900 && minsAfterMidnight <=  1043)
    {
        printf("Closest departure time: 3:45pm, Arrival time: 5:55pm\n");
    }
    else if (minsAfterMidnight >= 1044 && minsAfterMidnight <=  1223)
    {
        printf("Closest departure time: 7:00pm, Arrival time: 9:20pm\n");
    }
    else if (minsAfterMidnight >= 1224 && minsAfterMidnight <=  1440)
    {
        printf("Closest departure time: 9:45pm, Arrival time: 11:58pm\n");
    }

    return 0;
}
