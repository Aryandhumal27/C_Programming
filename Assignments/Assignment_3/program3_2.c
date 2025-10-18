//  Write a program which accept number from user and print even factors of that number

//  Input :     24
//  Output :    1   2   3   4   6   8   12

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Discription :   It is used to display the factors of a number
//  Input :         int
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;                                   // Loop counter variable

    if(iNo <= 0)                                    //  Updator
    {
        iNo = -iNo;                         
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)                       // Business Logic
        {
            printf("%d\t",iCnt);            
        }
    }
}   //  End of DisplayFactor

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // Variable to store user input

    printf("Enter number : \n");
    scanf("%d", &iValue);                           // Accept user input

    DisplayFactor(iValue);                          // Function call 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 24      Output : 1   2   3   4   6   8   12
//  Input : 30      Output : 1   2   3   5   6   10   15
//
////////////////////////////////////////////////////////////////////////////////////////////////