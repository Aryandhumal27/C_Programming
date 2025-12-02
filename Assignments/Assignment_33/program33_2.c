/*
    2. Accept Character from user and check wheather it is capital it is or not (A-Z).

    Input :     F
    Output :    TRUE

    Input :     d
    Output :    FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    iRet = ChkCapital(cValue);

    if(iRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not Capital Character");
    }

    return 0;
}

