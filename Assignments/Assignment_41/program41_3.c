/*
    3. Write a recursive program which accept string from user and count number of characters. 

    Input :     Hello
    Output :    5
*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iLength = 0;

    if(*str != '\0')
    {
        iLength++;
        str++;

        Strlen(str);
    }

    return iLength;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}