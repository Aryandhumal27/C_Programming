/*
    5. Write a program which accept string from user reverse that string in place. 

    Input :     "abcd"
    Output :    "dcba"
    
    Input :     "abba"
    Output :    "abba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}