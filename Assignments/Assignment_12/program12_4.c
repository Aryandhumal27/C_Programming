/*
    4)Sum of even factors (exclude the number itself)
*/

#include<stdio.h>

int sum_of_even_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && (iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("%d\n", sum_of_even_factors(iValue));

    return 0;
}