/*
    5. Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

    Input :     5
    Output :    0.464515

    Input :     7
    Output :    0.650321
*/

#include<stdio.h>

double SquareMetre(int iNo)
{
    double dToSquareMetre = 0.0;

    dToSquareMetre = iNo * 0.0929;

    return dToSquareMetre;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMetre(iValue);

    printf("Area is %d in Sqaure Feet is equal to %lf in Square Metre", iValue, dRet);

    return 0;
}