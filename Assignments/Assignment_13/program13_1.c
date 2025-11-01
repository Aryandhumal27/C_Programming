/*
    1) Print all numbers from 1 to N
*/

#include<stdio.h>

void print_numbers(int iLimit)
{
    int iCnt = 0;
    
    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

//  Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    print_numbers(iValue);

    return 0;
}