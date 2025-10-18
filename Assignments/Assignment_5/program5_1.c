//  1.Check Even or Odd

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Discription :   It is used to check whether a number is even or odd
//  Input :         int
//  Output :        bool
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;                        // Number is even
    }
    else
    {
        return false;                       // Number is odd
    }
}   //  End of function CheckEvenOdd

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input
    bool bRet = false;                      // Variable to store the result

    printf("Enter number : \n");
    scanf("%d", &iValue);                   // Accept user input

    bRet = CheckEvenOdd(iValue);            // Function call

    if(bRet == true)
    {
        printf("%d is Even number", iValue);
    }
    else
    {
        printf("%d is Odd number", iValue);    
    }

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10      Output : 10 is Even number
//  Input : 11      Output : 11 is Odd number
//
////////////////////////////////////////////////////////////////////////////////////////////////