/*
    3. Write a program to find even factorial of given number.

    Input  :    5
    Output :    8       (4 * 2)

    Input  :    -5
    Output :    8       (4 * 2)

    Input  :    10
    Output :    3840    (10 * 8 * 6 * 4 * 2)
*/

#include<stdio.h>


// int EvenFactorial(int iNo)
// {
//     int iCnt = 0;
//     int iFact = 0;

//     if(iNo < 0)
//     {
//         iNo = -iNo;
//     }

//     for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
//     {
//         if((iCnt % 2) == 0)
//         {
//             iFact = iFact * iCnt;
//         }
//     }
//     return iFact;
// }

// Time Complexity : O(N)

//Optimized Way

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2, iFact = 1; iCnt <= iNo; iCnt = iCnt + 2)
    { 
        iFact = iFact * iCnt; 
    }
    return iFact;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}