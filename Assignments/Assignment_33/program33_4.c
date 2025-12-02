/*
    4.Accept Character from user and check whether it is small case or not(a-z).

    Input :     g
    Output :    TRUE

    Input :     D
    Output :    FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    iRet = ChkSmall(cValue);

    if(iRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}