/*
    2.Write a program which accept number from user and display its factors in decreasing order
    
    Input :     12
    Output :    6   4   3   2   1

    Input :     13
    Output :    1 

    Input :     10
    Output :    5   2   1
*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Discription :   It is used to display the factors of a number in decreasing order
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;                                   // Loop counter variable

    
    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;                         
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)        // Business Logic
    {
        if((iNo % iCnt) == 0)               
        {
            printf("%d\t", iCnt); 
        }
    }
}   //  End of function FactRev

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input

    printf("Enter Number : \n");
    scanf("%d", &iValue);                   // Accept user input

    FactRev(iValue);                        // Function call

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12      Output : 6   4   3   2   1
//  Input : 13      Output : 1
//  Input : 10      Output : 5   2   1
//
////////////////////////////////////////////////////////////////////////////////////////////////