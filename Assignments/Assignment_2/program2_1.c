//  1.Accept one number from user and print that number of * on screen

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to print the number of * on the screen
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          17/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;                           // Loop counter variable

    if(iNo < 0)                             // Updator
    {
        iNo = -iNo;                         // Convert negative to positive
    }

    while(iCnt < iNo)                       // Loop to print * iNo times
    {
        printf("*");                        // Print * on the screen
        iCnt++;                             // Increment loop counter
    }
}   //  End of function Display

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input

    printf("Enter number : ");
    scanf("%d", &iValue);                   // Accept user input

    Display(iValue);                        // Method call

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 5       Output : *****
//  Input : -5      Output : *****
//  Input : 0       Output : 
//
////////////////////////////////////////////////////////////////////////////////////////////////