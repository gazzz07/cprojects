/* Program that prompts for a phone number in form - (xxx) xxx-xxxx then displays in form xxx.xxx.xxxx */

#include <stdio.h>

int main(void)
{
    printf("Enter a phone number [ (xxx) xxx-xxxx ]: ");
    int bracketNum, leftNum, rightNum;
    scanf(" ( %d ) %d - %d", &bracketNum, &leftNum, &rightNum);

    printf("You entered %d.%d.%d\n", bracketNum, leftNum, rightNum);
}
