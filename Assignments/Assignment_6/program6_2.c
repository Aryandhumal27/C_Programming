// 2. Write a program which accept one number from user and check whether that number is greater than 100 or not

/*
    Input :     101
    Output :    Greater

    Input :     39
    Output :    Smaller 
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : ");
    scanf("%d", &iValue);
    

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}