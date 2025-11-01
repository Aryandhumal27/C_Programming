/*
    2) Count total factors of a number
*/

#include<stdio.h>

int count_factors(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("%d\n", count_factors(iValue));

    return 0;
}