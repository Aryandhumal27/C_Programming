/*
    5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

    Input :     12
    Output :    -34     (16 - 50)  

    Input :     10
    Output :    -29     (8 - 37)   
*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Discription :   It is used to calculate the difference between the summation of factors and 
//                  non factors of a number
//  Input :         int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iFactSum = 0;                                   // store summation of factors
    int iNonFactSum = 0;                                // store summation of non factors
    int iCnt = 0;                                       // Loop counter variable
    int iFactDiff = 0;                                  // store the difference

    if(iNo < 0)                                         // Updator
    {
        iNo = -iNo;                         
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)               
        {
            iFactSum = iFactSum + iCnt;                 // summation of factors
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;           // summation of non factors
        }
    }
    iFactDiff = iFactSum - iNonFactSum;                 // Calculate the difference

    return iFactDiff;
}   //  End of FactDiff

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                     // Variable to store user input
    int iRet = 0;                                       // Variable to store the result

    printf("Enter Number : \n");
    scanf("%d", &iValue);                               // Accept user input

    iRet = FactDiff(iValue);                            // Function call 

    printf("%d", iRet);                     
    
    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12      Output : -34
//  Input : 10      Output : -29
//
////////////////////////////////////////////////////////////////////////////////////////////////