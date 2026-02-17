/*
    4. Write arecursive program which accept number from user and
    return its factorial.

    Input : 5
    Output : 120
*/

#include<stdio.h>

int Fact(int iNo)
{
    static int Factorial = 1;

    if(iNo >= 1)
    {
        Factorial = Factorial * iNo;
        iNo--;
        Fact(iNo);
    }

    return Factorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d\n", iRet);

    return 0;
}