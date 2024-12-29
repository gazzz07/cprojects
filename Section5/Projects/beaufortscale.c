/* Program to convert windspeed in knots into description of conditions */

#include <stdio.h>

int main()
{
    int windSpeed;
    printf("What is the windspeed in knots?: ");
    scanf("%d", &windSpeed);

    if (windSpeed < 1)
    {
        printf("Calm.\n");
    } 
    else if (windSpeed <= 3)
    {
        printf("Light air.\n");
    } 
    else if (windSpeed <= 27)
    {
        printf("Breeze.\n");
    }
    else if (windSpeed <= 47)
    {
        printf("Gale.\n");
    }
    else if (windSpeed <= 63)
    {
        printf("Storm.\n");
    }
    else
    {
        printf("Hurricane.\n");
    }
    
    return 0;
}
