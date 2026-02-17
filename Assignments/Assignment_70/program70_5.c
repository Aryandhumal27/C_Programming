/*
    5. Write arecursive program which accept number from user and
    return its product of digits.

    Input : 523
    Output : 30
*/

#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMul = iMul * iDigit;
        Mult(iNo);
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);
    printf("Multiplication of digits : %d\n", iRet);

    return 0;
}