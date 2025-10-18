// 1.Write a program which accept one number from user and 
//   print that number of even numbers on screen

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Discription :   It is used to print the number of even numbers on the screen
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;                           // Loop counter variable
    int iFrequency = 0;                     // Variable to track the number of even numbers

    // Input validation
    if(iNo <= 0)
    {
        return;                             // Exit if input is invalid
    }

    iCnt = 1;
    iFrequency = 1;
    
    while(iNo >= iFrequency)                // Loop to print iNo even numbers
    {
        if(iCnt % 2 == 0)                   // Check if the number is even
        {
            printf("%d\t", iCnt);         
            iFrequency++;                   // Increment the frequency counter
        }
        iCnt++;                             // Increment the loop counter
    }
}   //  End of function PrintEven

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

    PrintEven(iValue);                      // Function call 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 5       Output : 2  4  6  8  10
//  Input : 3       Output : 2  4  6
//
////////////////////////////////////////////////////////////////////////////////////////////////