/*
    5)Find sum of first N even numbers
*/

#include<stdio.h>

int sum_even_numbers(int iLimit)
{
    int iCnt = 0;
    int iSum = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 2; iCnt <= iLimit; iCnt = iCnt + 2)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

//  Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("%d\n", sum_even_numbers(iValue));

    return 0;
}