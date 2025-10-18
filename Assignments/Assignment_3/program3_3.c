//  3.Write a program which accept number from user and print even factors of that number

//  Input :     36
//  Output :    2   6   12  18

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Discription :   It is used to display the even factors of a number
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;                                           // Loop counter variable

    if(iNo <= 0)                                            // Updator
    {
        iNo = -iNo;                       
    }

    // Loop to find the even factors
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))        // Business Logic
        {
            printf("%d\t",iCnt);            
        }
    }
}   //  End of function DisplayEvenFactor

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                         // Variable to store user input

    printf("Enter number : \n");
    scanf("%d", &iValue);                                   // Accept user input

    DisplayEvenFactor(iValue);                              // Function call 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 36      Output : 2   6   12  18
//  Input : 24      Output : 2   4   6   8   12
//
////////////////////////////////////////////////////////////////////////////////////////////////