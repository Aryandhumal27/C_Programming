/*
    5. Write a recursive program which accept number from user and return its product of digits. 

    Input :     523
    Output :    30
*/

#include<stdio.h>

int Mult(int iNo)
{
    static int iProduct = 1;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;

        Mult(iNo);
    }

    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}