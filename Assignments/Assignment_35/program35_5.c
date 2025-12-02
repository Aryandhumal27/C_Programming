/*
    5. Write a program which accept string from user and display it in reverse order.

    Input :     "MarvellouS"
    Output :    "SoullevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
    char temp = '\0';

    temp = *str;

    while(*str != '\0')
    {
        *str++;
    }
    *str--;

    while(*str != temp)
    {
        printf("%c", *str);
        *str--;
    }
    printf("%c", *str);
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}