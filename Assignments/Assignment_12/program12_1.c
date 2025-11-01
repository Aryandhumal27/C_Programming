/*
    1) Print all factors of a number 
*/

#include<stdio.h>

void print_factors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    print_factors(iValue);

    return 0;
}