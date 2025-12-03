/*
    3. Write a program which accept string from user and copy that character of that
    string into another string by converting all small character into capital case. 

    Input :     "Marvellous Python 2"
    Output :    "MARVELLOUS PYTHON 2"
*/

#include<stdio.h>

void StrCopyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }

        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];                           // Empty String

    StrCopyCap(arr, brr);

    printf("%s", brr);                      // MARVELLOUS PYTHON 2

    return 0;
}