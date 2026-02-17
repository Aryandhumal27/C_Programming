/*
    3. Write arecursive program which accept string from user
    and count number of characters.

    Input : Hello
    Output : 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20] = {'\0'};

    printf("Enter the string : ");
    scanf(" %s", &arr);

    iRet = Strlen(arr);
    printf("length of string is : %d\n", iRet);

    return 0;
}