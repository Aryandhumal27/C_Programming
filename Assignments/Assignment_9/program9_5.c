/*
    5. Write a program which return difference between Even factorial and odd factorial of given number.

    Input  :     5
    Output :    -7          (8 - 15)

    Input  :    -5
    Output :    -7          (8 - 15)

    Input  :    10
    Output :    2895        (3840 - 945)
*/

#include<stdio.h>

// int FactorialDiff(int iNo)
// {
//     int iCnt = 0;
//     int iEvenFact = 0;
//     int iOddFact = 0;
//     int iFactDiff = 0;

//     if(iNo < 0)
//     {
//         iNo = -iNo;
//     }

//     for(iCnt = 1, iEvenFact = 1, iOddFact = 1; iCnt <= iNo; iCnt++)
//     {
//         if((iCnt % 2) == 0)
//         {
//             iEvenFact = iEvenFact * iCnt;
//         }
//         else
//         {
//             iOddFact = iOddFact * iCnt;
//         }
//     }
//     iFactDiff = iEvenFact - iOddFact;
//     return iFactDiff;
// }

//  Time Complexity : O(N)
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 0;
    int iOddFact = 0;
    int iFactDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2, iEvenFact = 1; iCnt <= iNo; iCnt=iCnt + 2)
    {    
       iEvenFact = iEvenFact * iCnt; 
    }

    for(iCnt = 1, iOddFact = 1; iCnt <= iNo; iCnt=iCnt + 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    iFactDiff = iEvenFact - iOddFact;
    return iFactDiff;
}

//  Time Complexity : O(N)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}