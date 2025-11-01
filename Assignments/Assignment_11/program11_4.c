/*
    4. write a program hich accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

    Input :     23  30
    Output :    108

    Input :     10  18
    Output :    70

    Input :     -10 2
    Output :    Invalid range

    Input :     90  18
    Output :    Invalid range

*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd )
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}   // End of function RangeSumEven
    // Time COmplexity : O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d", iRet);
    }
    else
    {
        printf("Invalid range");
    }

    return 0;
}   //End of main