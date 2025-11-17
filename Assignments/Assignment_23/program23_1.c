// 1. Accept N numbers from user and accept one another number as NO, Check whether NO is present or not.
/*
    Input : N :             6
            No :            66
            Elements :      85  66  3   66  93  88  

    Output : TRUE

    Input : N :             6
            No :            12
            Elements :      85  11  3   15  11  111 

    Output : FAlSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;    
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Check(p, iSize, iValue);

    if(iRet == TRUE)
    {
        printf("%d is present", iValue);
    }
    else
    {
        printf("%d is absent", iValue);
    }  

    free(p);

    return 0;
}