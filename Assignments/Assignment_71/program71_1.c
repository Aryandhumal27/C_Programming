/*
    1. Write a recursive program which accept string from user
    and count white spaces.

    Input : HE llo WOr ID
    Output : 3
*/

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
        WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[100];

    printf("Enter the String : \n");
    scanf("%[^'\n']s", &arr);

    iRet = WhiteSpace(arr);

    printf("No of whitespaces in string are : %d\n", iRet);


    return 0;
}