/*
    4. Write a recursive program which accept number from user and return its factorial. 

    Input :     5
    Output :    120
*/

#include<stdio.h>

int Fact(int iNo)
{
    static int iFactorial = 1;

    if(iNo != 0)
    {
        iFactorial = iFactorial * iNo;
        iNo--;

        Fact(iNo);
    }

    return iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}