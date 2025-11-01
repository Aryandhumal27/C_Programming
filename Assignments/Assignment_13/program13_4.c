/*
    4)Find sum of first N natural numbers
*/  

#include<stdio.h>

int sum_natural_numbers(int iLimit)
{
    int iCnt = 0;
    int iSum = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

//  Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("%d\n", sum_natural_numbers(iValue));

    return 0;
}