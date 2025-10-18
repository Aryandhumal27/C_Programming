//  2.Find maximum of two numbers

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Discription :   It is used to find the maximum of two numbers
//  Input :         int, int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(
                int iNo1,                   // First Input                      
                int iNo2                    // Second Input
            )
{
    if(iNo1 > iNo2)
    {
        return iNo1;                        // iNo1 is maximum
    }
    else
    {
        return iNo2;                        // iNo2 is maximum
    }
}   //  End of function FindMax

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;           // Variables to store user input
    int iRet = 0;                           // Variable to store the result

    printf("Enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);     // Accept user input

    iRet = FindMax(iValue1, iValue2);       // Function call 

    printf("Maximum is : %d\n", iRet);      
    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10 20      Output : Maximum is : 20
//  Input : 20 10      Output : Maximum is : 20
//
////////////////////////////////////////////////////////////////////////////////////////////////