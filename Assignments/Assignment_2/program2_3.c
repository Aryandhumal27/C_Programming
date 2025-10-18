//  3.Accept the number from user if number is less that 10 then print "Hello" otherwise print "Demo"

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Discription :   It is used to print "Hello" or "Demo" based on the input number
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          17/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)                            // Business Logic 
    {
        printf("Hello");                    // Print "Hello" if number is less than 10
    }
    else
    {
        printf("Demo");                     // Print "Demo" if number is greater than or equal to 10
    }
}   //  End od function Display

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
//  Input : 5       Output : Hello
//  Input : 15      Output : Demo
//  Input : 10      Output : Demo
//
////////////////////////////////////////////////////////////////////////////////////////////////