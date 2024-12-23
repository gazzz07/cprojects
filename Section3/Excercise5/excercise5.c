#include <stdio.h>

int main()
{
    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);

    //user enters 12.3 45.6 789

    printf("%f, %d, %f\n", x, i, y);

    //output should be 12.3 for x, 45 for i and .6789 for y (as y picks up the decimal point from i which is an int so the . gets shuffled across)
    //output was 12.300000, 45, 0.600000 -- As there is whitespace after the .6 and before 789, 789 will be picked up by the next scanf call (still in the buffer)
}
