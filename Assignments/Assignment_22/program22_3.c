// 3. Accept N numbers from user check whether that numbers contain 11 in it or not.
/*
    Input : N :             6
            Elements :      85  66  11   80  93  88  

    Output : 11 is present

    Input : N :             6
            Elements :      85  66  3   80  93  88  

    Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check11(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

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

    bRet = Check11(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}