/* Program that asks for number of days in the month, and starting day, then prints a calendar page */

#include <stdio.h>

int main()
{
    int daysInMonth, startingDay;
    printf("Enter number of days in month: ");
    scanf("%d", &daysInMonth);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startingDay);

    for (int i = 1; i < startingDay; i++)
        printf("\t");

    for (int i = 1; i < daysInMonth; ++i)
    {
        printf("%d\t", i);
        if ((startingDay + i - 1) % 7 == 0)
            printf("\n");
    }
}
