// 4. Accept N numbers from user and display all such numbers which contains 3 digits in it.
/*
    Input :     N :         6
                Elements :  8225    665     3     76    953     858
                
    Output :    665     953     858
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigitFreq = 0, iCurr = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iDigitFreq = 0;
        iCurr = Arr[iCnt];

        while(Arr[iCnt] > 0)
        {
            Arr[iCnt] = Arr[iCnt] / 10;
            iDigitFreq++;
        }

        Arr[iCnt] = iCurr;

        if(iDigitFreq == 3)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *p = NULL;
    
    printf("Enter the number of elements : ");
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
        printf("Enter element %d : ", (iCnt + 1));
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}