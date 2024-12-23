#include <stdio.h>

int main()
{
    /*int i = 7, j = 8, k = 9;
    printf("%d", ((i + 10) % k) / j);
    */

    int i = 7, j = 8;

    i *= j + 1;

    printf("%d %d\n", i, j);
    printf("%d\n", -(i/j));
}
