//  5. Find largest among three numbers

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Discription :   It is used to find the largest among three numbers
//  Input :         int, int, int
//  Output :        int
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{

    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;                                        // iNo1 is the largest
    }
    else if ((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;                                        // iNo2 is the largest
    }
    else
    {
        return iNo3;                                        // iNo3 is the largest
    } 
}   //  End of function FindLargest

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;              // Variables to store user input
    int iRet = 0;                                           // Variable to store the result

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);        // Accept user input

    iRet = FindLargest(iValue1, iValue2, iValue3);          // Function call

    printf("Largest number is : %d\n", iRet); 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10 20 30      Output : Largest number is : 30
//  Input : 30 20 10      Output : Largest number is : 30
//  Input : 10 10 10      Output : Largest number is : 10
//
////////////////////////////////////////////////////////////////////////////////////////////////