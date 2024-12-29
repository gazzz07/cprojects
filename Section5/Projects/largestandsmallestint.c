/* Program that finds the largest and smallest of 4 user provided integers */

#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;
    printf("Enter 4 numbers separated by a space: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("Largest: %d\n", n1);
    } 
    else if (n1 < n2 && n1 < n3 && n1 < n4)
    {
        printf("Smallest: %d\n", n1);
    }

    if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("Largest: %d\n", n2);
    } 
    else if (n2 < n1 && n2 < n3 && n2 < n4)
    {
        printf("Smallest: %d\n", n2);
    }

    if (n3 > n2 && n3 > n1 && n3 > n4)
    {
        printf("Largest: %d\n", n3);
    } 
    else if (n3 < n2 && n3 < n1 && n3 < n4)
    {
        printf("Smallest: %d\n", n3);
    }

    if (n4 > n2 && n4 > n3 && n4 > n1)
    {
        printf("Largest: %d\n", n4);
    } 
    else if (n4 < n2 && n4 < n3 && n4 < n1)
    {
        printf("Smallest: %d\n", n4);
    }

    return 0;
}
