/* Program that takes a 2 digit integer and converts into the English word for that number */

#include <stdio.h>

int main()
{
    int tens, ones;
    printf("Enter a 2 digit number: ");
    scanf("%1d%1d", &tens, &ones);

    switch (tens)
    {   
        case 0: 
            printf("");
            break;
        
        case 1: 
            switch (ones)
            {
                case 0:
                    printf("ten\n");
                    break;
                case 1: 
                    printf("eleven\n");
                    break;
                case 2: 
                    printf("twelve\n");
                    break;
                case 3: 
                    printf("thirteen\n");
                    break;
                case 4: 
                    printf("fourteen\n");
                    break;
                case 5: 
                    printf("fifteen\n");
                    break;
                case 6: 
                    printf("sixteen\n");
                    break;
                case 7: 
                    printf("seventeen\n");
                    break;
                case 8: 
                    printf("eighteen\n");
                    break;
                case 9: 
                    printf("nineteen\n");
                    break;
                default:
                    printf("Errors - teens\n");
                    break;
                    return 1;
            }
            return 0;

        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        default:
            printf("Error - tens\n");
            break;
            return 1;
    }

    if (tens != 0)
        printf("-");

    switch (ones)
    {
        case 0:
            printf("\n");
            break;
        case 1: 
            printf("one\n");
            break;
        case 2: 
            printf("two\n");
            break;
        case 3: 
            printf("three\n");
            break;
        case 4: 
            printf("four\n");
            break;
        case 5: 
            printf("five\n");
            break;
        case 6: 
            printf("six\n");
            break;
        case 7: 
            printf("seven\n");
            break;
        case 8: 
            printf("eight\n");
            break;
        case 9: 
            printf("nine\n");
            break;
        default:
            printf("Error - ones\n");
            break;
            return 1;
    }

    return 0;
}
