/*
    3)Print all odd numbers up to N
*/  

#include<stdio.h>

void print_odd_numbers(int iLimit)
{
    int iCnt = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt = iCnt+2)
    {
        printf("%d ", iCnt);
    }
}

//  Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    print_odd_numbers(iValue);

    return 0;
}