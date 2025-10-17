#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    bFlag = true;
    
    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;              // Optimization
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number", iValue);
    }
    else
    {
        printf("%d is not a prime number", iValue);
    }
    
    return 0;
}

// Time Complexity : For Prime - N/2
// Time Complexity : For Non-Prime - either 1 or 2
