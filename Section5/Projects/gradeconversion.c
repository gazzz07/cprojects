/* Program to take in numerical grade input and convert to corresponding letter grade */

#include <stdio.h>

int main()
{
    int gradeInput1, gradeInput2;

    printf("Enter numerical grade: ");
    scanf("%1d%d", &gradeInput1, &gradeInput2);

    if (gradeInput1 < 0 || gradeInput1 >= 1 && gradeInput1 > 00)
    {
        printf("Error, please enter a number between 0 and 100\n");
        return 1;
    }

    switch (gradeInput1)
    {
        case 1:
            if (gradeInput2 == 00)
            {
                printf("Letter grade: A\n");
            }
            else if (gradeInput2 >= 1 && gradeInput2 <= 9)
            {
                printf("Letter grade: F\n");
            }
            else
            {
                printf("Error, please enter a number between 0 and 100\n");
            }
            break;
        case 0: case 2: case 3: case 4: case 5:
            printf("Letter grade: F\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 9:
            printf("Letter grade: A\n");
            break;
        default:
            printf("Error, please enter a number between 0 and 100\n");
            break;        
    }
    return 0;
}
