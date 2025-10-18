//  4.Accept one number and check whether it is divisible by 5 or not.

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Discription :   It is used to check whether it is divisible by 5 or not.
//  Input :         int
//  Output :        bool
//  Author :        Aryan Pandharinath Dhumal
//  Date :          17/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)                      //  Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input
    bool bRet = false;                      // Variable to store the result

    printf("Enter Number : ");
    scanf("%d", &iValue);                   // Accept user input

    bRet = Check(iValue);                   // Method call

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10      Output : Divisible by 5
//  Input : 11      Output : Not Divisible by 5
//
////////////////////////////////////////////////////////////////////////////////////////////////