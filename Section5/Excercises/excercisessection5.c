#include <stdio.h>

int main()
{

    int areaCode;

    printf("Enter an area code: ");
    scanf("%d", &areaCode);

    switch (areaCode)
    {
        case 229: printf("Albany");
        break;
        case 404: printf("Alberta");
        break;
        case 470: printf("Atlanta");
        break;
        default: printf("Invalid");
    }
    
    
    return 0;
}

