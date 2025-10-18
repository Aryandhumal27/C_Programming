//  5.Accept number from user and check whether number is even or odd

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Discription :   It is used to check whether the number is even or odd
//  Input :         int
//  Output :        bool
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)                      // Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }
}   //  End of function ChkEven

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input
    bool bRet = false;                      // Variable to store the result

    printf("Enter number : ");
    scanf("%d", &iValue);                   // Accept user input

    bRet = ChkEven(iValue);                 // Function call 

    if(bRet == true)
    {
        printf("%d is Even number", iValue);
    }
    else
    {
        printf("%d is odd number", iValue);
    }

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10      Output : 10 is Even number
//  Input : 11      Output : 11 is odd number
//
////////////////////////////////////////////////////////////////////////////////////////////////