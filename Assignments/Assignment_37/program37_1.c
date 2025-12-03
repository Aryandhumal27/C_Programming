/*
    1. Write a program which accept strig from user and accept one character. Check whether that character is present in string or not.

    Input :     "Marvellous Multi OS"
                e
    Output :    TRUE

    Input :     "MArvellous Multi OS"
                W
    Output :    FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str != '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arr[20];
    char cValue = 0;
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter Character : ");
    scanf(" %c", &cValue);

    iRet = ChkChar(arr, cValue);

    if(iRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    
    return 0;
}