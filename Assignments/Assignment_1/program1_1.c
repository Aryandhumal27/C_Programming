//  1.Program to divide two numbers

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Discription :   It is used to perform Division
//  Input :         int, int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          17/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Divide  (
                int iNo1,               //  First input
                int iNo2                //  Second input
            )
{
    int iAns = 0;

    if(iNo2 == 0)                       //  Filter
    {
        return -1;
    }

    iAns = iNo1 / iNo2;                 //  Business Logic 

    return iAns;
}   //  End of function Divide

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;      //  Inputs
    int iRet = 0;                       //  To store the result

    iRet = Divide(iValue1, iValue2);    //  Method call

    printf("Division is %d", iRet);

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 15          Input2 : 5         Output : Division is 3
//  Input1 : 10          Input2 : 5         Output : Division is 2
//  Input1 : 10          Input2 : 0         Output : Division is -1
//  Input1 : 9           Input2 : 2         Output : Division is 4
//
////////////////////////////////////////////////////////////////////////////////////////////////