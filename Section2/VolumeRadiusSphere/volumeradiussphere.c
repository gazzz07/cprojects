/*Program to calculate the volume of a sphere with a given radius*/

#include <stdio.h>

int main(void)
{
    float radius;
    printf("What is the radius of the sphere in metres?: ");
    scanf ("%f", &radius);
    float volume = (4.0f / 3.0f) * 3.141592 * (radius * radius * radius);

    printf("The volume of a %.2f metre sphere is: %f\n", radius, volume);
}
