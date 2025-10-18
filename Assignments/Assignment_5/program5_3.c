//  3.Check Leap year

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Discription :   It is used to check whether a year is a leap year or not
//  Input :         int
//  Output :        bool
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckLeapYear(int iYear)
{
    // Business Logic
    if((((iYear % 4) == 0) && ((iYear % 100) != 0)) || (iYear % 400 == 0))
    {
        return true;                        
    }
    else
    {   
        return false;                       
    }
}   //  End of function CheckLeapYear

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iYr;                                        // Variable to store user input
    bool bRet = false;                              // Variable to store the result

    printf("Enter year : \n");
    scanf("%d", &iYr);                              // Accept user input

    bRet = CheckLeapYear(iYr);                      // Function call 

    if(bRet == true)
    {
        printf("%d is a leap year.", iYr);
    }
    else
    {   
        printf("%d is not a leap year.", iYr);
    }

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 2020      Output : 2020 is a leap year.
//  Input : 2021      Output : 2021 is not a leap year.
//
////////////////////////////////////////////////////////////////////////////////////////////////