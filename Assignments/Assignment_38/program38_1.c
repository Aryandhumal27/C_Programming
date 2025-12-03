/*
    1. Write a program which accept string from user and copy that character of that string into another in reverse order. 

    Input :     "Marvellous Python"
    Output :    "nohtyP suollevraM"
*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];                           // Empty String

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
}