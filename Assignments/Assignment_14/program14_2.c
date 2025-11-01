/*
    2. Write a program whixh accept number from user and check whether it contains 0 in it or not.

    Input :     2395
    Output :    There is no zero

    Input :     1018
    Output :    It Contains Zero

    Input :     9000
    Output :    It Contains Zero

    Input :     10687
    Output :    It Contains Zero
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;
    }
    return 0;
}

//  Time Complexity : O(N)

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}