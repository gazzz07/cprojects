#include <stdio.h>

int main()
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    //the user inputs 10.3 5 6 with no commas

    printf("%d, %f, %d\n", i, x, j);

    //this prints 10, 0.300000, 5 as the . ends input for the first int, so the .3 is then printed as a float, with the 5 being assigned to the final int.
}
