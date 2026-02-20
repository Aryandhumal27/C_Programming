/////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>                                   // For Inpur Output
#include<stdbool.h>                                 // For bool datatype       

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check Even or Odd Number
//
//
//
/////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

/////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of application
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("%d is Even Number", iValue);
    }
    else
    {
        printf("%d is Odd Number", iValue);
    }

    return 0;
}