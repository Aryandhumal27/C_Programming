/*
    3.Write a program which accept string from user and return difference between frequency of small
    characters and frequency of capital characters.

    Input :     "MarvellouS"
    Output :    6 (8-2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }

        *str++;
    }

    return (iCountSmall - iCountCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}