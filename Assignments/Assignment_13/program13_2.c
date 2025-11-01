/*
    2)Print all even numbers up to N
*/  

#include<stdio.h>

void print_even_numbers(int iLimit)
{
    int iCnt = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 2; iCnt <= iLimit; iCnt = iCnt+2)
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

    print_even_numbers(iValue);

    return 0;
}