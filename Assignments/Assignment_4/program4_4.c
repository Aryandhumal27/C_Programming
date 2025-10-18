//  4.Write a program which accept number from user and return summation of all its non factors
/*
    Input :     12
    Output :    50  

    Input :     10
    Output :    37        
*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Discription :   It is used to calculate the summation of all non factors of a number
//  Input :         int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;                           // Loop counter variable
    int iSum = 0;                           // Variable to store the summation of non factors

    if(iNo < 0)                             // Updator
    {
        iNo = -iNo;                         
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)               
        {
            iSum = iSum + iCnt;             // Business Logic
        }
    }
    return iSum;
}   //  End of function SumNonFact

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // Variable to store user input
    int iRet = 0;                           // Variable to store the result

    printf("Enter number : \n");
    scanf("%d", &iValue);                   // Accept user input

    iRet = SumNonFact(iValue);              // Function call

    printf("%d", iRet);                

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12      Output : 50
//  Input : 10      Output : 37
//
////////////////////////////////////////////////////////////////////////////////////////////////