/*
    1.Write a program which accept number from user and display its multiplication of factors

    Input :     12
    Output :    144     (1 * 2 * 3 * 4 * 6)

    Input :     13
    Output :    1     (1)

    Input :     10
    Output :    10     (1 * 2 * 5)
*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Discription :   It is used to calculate the multiplication of factors of a number
//  Input :         int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{ 
    int iCnt = 0;                                   // Loop counter variable
    int iMul = 1;                                   // Variable to store the multiplication of factors

    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;                        
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)               
        {
            iMul = iMul * iCnt;                     // Business Logic
        }
    }
    return iMul;
}   //  End of function MultFact

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // Variable to store user input
    int iRet = 0;                                   // Variable to store the result

    printf("Enter number : \n");
    scanf("%d", &iValue);                           // Accept user input

    iRet = MultFact(iValue);                        // Function call 

    printf("%d", iRet);                    

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12      Output : 144
//  Input : 13      Output : 1
//  Input : 10      Output : 10
//
////////////////////////////////////////////////////////////////////////////////////////////////