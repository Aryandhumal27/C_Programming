/*  
    3.Write a program which accept number from user and display all its non factors

    Input :     12
    Output :    5   7   8   9   10   11

    Input :     13
    Output :    2   3   4   5   6   7   8   9   10  11  12

    Input :     10
    Output :    3   4   6   7   8   9
*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Discription :   It is used to display the non factors of a Function
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;                           // Loop counter variable

    if(iNo < 0)                             // Updator
    {
        iNo = -iNo;                         
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)               // Business Logic
        {
            printf("%d\t", iCnt);           
        }
    }
}   //  End of function NonFact

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

    NonFact(iValue);                        // Function call

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12      Output : 5   7   8   9   10   11
//  Input : 13      Output : 2   3   4   5   6   7   8   9   10  11  12
//  Input : 10      Output : 3   4   6   7   8   9
//
////////////////////////////////////////////////////////////////////////////////////////////////