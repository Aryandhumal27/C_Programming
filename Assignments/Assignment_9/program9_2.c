/*
    2. Accept amount in US dollar and return its corresponding value in Indian currency Consider 1$ as 70 rupees.

    Input :     10
    Output :    700

    Input :     3
    Output :    270

    Input :     1200
    Output :    84000
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iINR = iNo * 70;
    return iINR;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}