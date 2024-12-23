/* Program asks users to enter numbers 1 - 16 in any order, then displays numbers in 4x4 block, followed by sums of rows, columns and diags */

#include <stdio.h>

int main()
{
    printf("Enter the numbers from 1 to 16 in any order: ");
    int a1, a2, a3, a4, b1, b2, b3, b4, x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &x1, &x2, &x3, &x4, &y1, &y2, &y3, &y4);

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", 
            a1, a2, a3, a4, b1, b2, b3, b4, x1, x2, x3, x4, y1, y2, y3, y4);
    //int rowOneSum, rowTwoSum, rowThreeSum, rowFourSum, colOneSum,
    //    colTwoSum, colThreeSum, colFourSum, diagOneSum, diagTwoSum;

    int rowOneSum = a1 + a2 + a3 + a4;
    int rowTwoSum = b1 + b2 + b3 + b4;
    int rowThreeSum = x1 + x2 + x3 + x4;
    int rowFourSum = y1 + y2 + y3 + y4;
    int colOneSum = a1 + b1 + x1 + y1;
    int colTwoSum = a2 + b2 + x2 + y2;
    int colThreeSum = a3 + b3 + x3 + y3;
    int colFourSum = a4 + b4 + x4 + y4;
    int diagOneSum = a1 + b2 + x3 + y4;
    int diagTwoSum = a4 + b3 + x2 + y1;
    
    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n", rowOneSum,
            rowTwoSum, rowThreeSum, rowFourSum, colOneSum, colTwoSum, colThreeSum, colFourSum,
            diagOneSum, diagTwoSum);
}
