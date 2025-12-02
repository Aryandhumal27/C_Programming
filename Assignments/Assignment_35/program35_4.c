/*
    4. Write a program which accept string from user and check whether it contains vowels in it or not.

    Input :     "marvellous"
    Output :    TRUE

    Input :     "Demo"
    Output :    TRUE

    Input :     "xyz"
    Output :    FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u')
        {
            return 1;
        }
        *str++;
    }

    return 0;
}

int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Cotains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}