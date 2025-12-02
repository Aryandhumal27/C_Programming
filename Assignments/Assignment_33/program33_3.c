/*
    3. Accept Character from user and check whether it is digit or not (0-9).

    Input :     7
    Output :    TRUE

    Input :     d
    Output :    FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char cValue = '\0';
    BOOL iRet = 0;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    iRet = ChkDigit(cValue);

    if(iRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}