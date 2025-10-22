/*
    3. Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)

    Input :     5
    Output :    5000

    Input :     12
    Output :    12000
*/

#include<stdio.h>

int KMtoMetre(int iNo)
{
    int iToMetre = 0;

    iToMetre = iNo * 1000;

    return iToMetre;
}

// Time Complexity : O(1)

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distnace : ");
    scanf("%d", &iValue);

    iRet = KMtoMetre(iValue);

    printf("%d kilometre is equal to %d metre", iValue, iRet);

    return 0;
}