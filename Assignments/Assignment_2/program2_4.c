//  4.Accept two numbers from user and display first number in second number of times

//  Input :     12  5
//  Output :    12  12  12  12  12

//  Input :     -2  3
//  Output :    -2  -2  -2

//  Input :     21  3
//  Output :    21  21  21

//  Input :     -2  0
//  Output :    

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to display the first number second number of times
//  Input :         int, int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          17/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;                                   // Loop counter variable

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)       // Loop to print iNo iFrequency times
    {
        printf("%d\t", iNo);                        // Print iNo on the screen
    }
}   //  End of function Display

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // Variable to store the number
    int iCount = 0;                                 // Variable to store the frequency

    printf("Enter number : ");
    scanf("%d", &iValue);                           // Accept user input for number

    printf("Enter frequency : ");
    scanf("%d", &iCount);                           // Accept user input for frequency

    Display(iValue, iCount);                        // Method call 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12  5       Output : 12  12  12  12  12
//  Input : -2  3       Output : -2  -2  -2
//  Input : 21  3       Output : 21  21  21
//  Input : -2  0       Output : 
//
////////////////////////////////////////////////////////////////////////////////////////////////