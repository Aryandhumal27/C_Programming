/*
    5. Write a recursive program which accept number from
    user and return its reverse number.

    Input : 523
    Output : 325
*/

#include<stdio.h>
#include<math.h>

int CountDigit(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo/10;
    }

    return iCount;
}

int Reverse(int iNo)
{
    static int ReverseDigit = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        ReverseDigit = (ReverseDigit*10) + iDigit;
        iNo = iNo/10;
        Reverse(iNo);
    }

    return ReverseDigit;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse digit are : %d\n", iRet);

    return 0;
}